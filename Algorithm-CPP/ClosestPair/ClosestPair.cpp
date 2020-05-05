#include <cmath>
#include <ctime>
#include "Engine/Game2D.h"
#include "Engine/yh.h"
#include "quicksort.h"

using namespace yh;

float	getmin(float a, float b)
{
	return (a < b ? a : b);
}

float	getmin(float a, float b, float c)
{
	float min;

	min = getmin(a, b);
	min = getmin(min, c);
	return (min);
}

void	setPair(vec2* v, int a, int b, vec2* pair)
{
	if ((v[a] - v[b]).getMagnitude() < ((pair[0] - pair[1]).getMagnitude()))
	{
		pair[0] = v[a];
		pair[1] = v[b];
	}
}

// 두 점을 return 하도록
void	closestPair(vec2* v, int left, int right, vec2* pair)
{
	std::cout << " left : " << left << " right : " << right << std::endl;
	if (right - left == 1)
	{
		float dist = (v[left] - v[right]).getMagnitude();

		setPair(v, left, right, pair);
	}
	else if (right - left == 2)
	{
		float min = getmin((v[left] - v[left + 1]).getMagnitude(), (v[left] - v[right]).getMagnitude(), (v[right] - v[left + 1]).getMagnitude());

		if (min == (v[left] - v[left + 1]).getMagnitude())	setPair(v, left, left + 1, pair);
		if (min == (v[left] - v[right]).getMagnitude())		setPair(v, left, right, pair);
		if (min == (v[left + 1] - v[right]).getMagnitude())	setPair(v, left + 1, right, pair);
	}
	else
	{
		closestPair(v, left, (left + right) / 2, pair);
		closestPair(v, (left + right) / 2 + 1, right, pair);
		
		float min = (pair[0] - pair[1]).getMagnitude();
		for (int i = left; i <= (left + right) / 2; ++i)
		{
			if (v[i].x < v[((left + right) / 2 + 1)].x - min)
				continue ;
			for (int j = (left + right) / 2 + 1; j <= right; ++j)
			{
				if (v[j].x > v[((left + right) / 2)].x + min)
					continue ;
				setPair(v, i, j, pair);
			}
		}
	}
}

int		main()
{
	using namespace std;
	vec2 v[10];
	for (int i = 0; i < 10; ++i)
		v[i].initRandom(-1, 1);
	quickSort(v, 0, 10, [](yh::vec2 a, yh::vec2 b) { if (a.x > b.x) return (1); else if (a.x == b.x) return (0); else return (-1); });
	for (int i = 0; i < 10; ++i)
		cout << v[i];
	vec2 pair[2] = { {FLT_MIN, FLT_MIN},{FLT_MAX, FLT_MAX} };
	closestPair(v, 0, sizeof(v)/sizeof(v[0]), pair);
	cout << "first point -  " << pair[0] << "second point -  " << pair[1];
	cout << "Distance : " << (pair[0] - pair[1]).getMagnitude() << endl;

	jm::Game2D().run(v, pair);
}