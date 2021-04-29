#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

class vec2;

float GetDistance(const vec2& v1, const vec2& v2);

class vec2
{
public:
	int x_;
	int y_;

	vec2()
	{
		x_ = rand() % 100;
		y_ = rand() % 100;
	}

	vec2(int x_in, int y_in)
	: x_(x_in), y_(y_in)
	{}

	vec2 operator - (const vec2& v) const
	{
		return (vec2(x_ - v.x_, y_ - v.y_));
	}

	friend std::ostream& operator << (std::ostream& out, const vec2& v)
	{
		out << '(' << v.x_ << ", " << v.y_ << ')';
		return out;
	}
};

class ClosestPair
{
public:
	vec2 v1_;
	vec2 v2_;
	float dist_;

	ClosestPair()
	{
		dist_ = std::numeric_limits<float>::max();
	}
	ClosestPair(const vec2& v1, const vec2& v2)
	{
		v1_ = v1;
		v2_ = v2;
		dist_ = GetDistance(v1, v2);
	}

	friend std::ostream& operator << (std::ostream& out, const ClosestPair& cp)
	{
		out << "Point1 : " << cp.v1_ << "\tPoint2 : " << cp.v2_ << "\tDistance : " << cp.dist_ << std::endl;
		return out;
	}
};

float GetDistance(const vec2& v1, const vec2& v2)
{
	return std::sqrt(std::pow((v1 - v2).x_, 2) + std::pow((v1 - v2).y_, 2));
}

void QuickSort(std::vector<vec2>& arr, int left, int right)
{
	if (left >= right)
		return ;

	int	pivot = (left + right) / 2;
	int	high = left + 1;
	int	low = right;

	std::swap(arr[pivot], arr[left]);
	while (high <= low)
	{
		while ((high <= right) && (arr[high].x_ <= arr[left].x_))
			high++;
		while ((low > left) && (arr[low].x_ >= arr[left].x_))
			low--;
		if ((high > right) || (low == left) || (high >= low))
			break;
		std::swap(arr[high], arr[low]);
	}
	std::swap(arr[left], arr[low]);

	QuickSort(arr, left, low - 1);
	QuickSort(arr, low + 1, right);
}

ClosestPair GetUnderThreeCase(const std::vector<vec2>& v, int left, int right)
{
	if (right == left + 2)
	{
		float dist1 = GetDistance(v[left], v[left + 1]);
		float dist2 = GetDistance(v[left], v[right]);
		float dist3 = GetDistance(v[left + 1], v[right]);

		if (dist1 < dist2 && dist1 < dist3)
			return ClosestPair(v[left], v[left + 1]);
		else if (dist2 < dist1 && dist2 < dist3)
			return ClosestPair(v[left], v[right]);
		else
			return ClosestPair(v[left + 1], v[right]);
	}
	else
		return ClosestPair(v[left], v[right]);
}

ClosestPair CheckCenter(const std::vector<vec2>& v, int left, int right, float d)
{
	float x_leftside = v[(left + right) / 2].x_ - d;
	float x_rightside = v[(left + right) / 2 + 1].x_ + d;
	ClosestPair closest_pair_center;

	for (int i = 0; i <= (left + right) / 2; ++i)
	{
		if (v[i].x_ < x_leftside)
			continue ;
		for (int j = (left + right) / 2 + 1; j <= right; ++j)
		{
			if (v[j].x_ > x_rightside)
				continue ;
			if (GetDistance(v[i], v[j]) < closest_pair_center.dist_)
				closest_pair_center = ClosestPair(v[i], v[j]);
		}
	}
	return closest_pair_center;
}

ClosestPair GetClosestPair(const std::vector<vec2>& v, int left, int right)
{
	if (right <= left + 2)
		return GetUnderThreeCase(v, left, right);
	ClosestPair closest_pair_left = GetClosestPair(v, left, (left + right) / 2);
	ClosestPair closest_pair_right = GetClosestPair(v, (left + right) / 2 + 1, right);

	float d = std::min(closest_pair_left.dist_, closest_pair_right.dist_);
	ClosestPair closest_pair_center = CheckCenter(v, left, right, d);

	if (closest_pair_left.dist_ < closest_pair_right.dist_ && \
		closest_pair_left.dist_ < closest_pair_center.dist_)
		return closest_pair_left;
	else if (closest_pair_right.dist_ < closest_pair_left.dist_ && \
		closest_pair_right.dist_ < closest_pair_center.dist_)
		return closest_pair_right;
	else
		return closest_pair_center;
}

int main()
{
	using namespace std;

	srand(time(NULL));

	vector<vec2> v(10);
	QuickSort(v, 0, v.size() - 1);
	for (const auto &e : v)
		cout << e << '\n';

	ClosestPair closest_pair;
	closest_pair = GetClosestPair(v, 0, v.size() - 1);
	cout << closest_pair << endl;
}
