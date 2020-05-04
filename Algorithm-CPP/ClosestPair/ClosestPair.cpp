#include <iostream>
#include <cmath>

class vec2
{
public:
	float x;
	float y;
	
	float	getMagnitude()
	{
		return (sqrt(x * x + y * y));
	}
};

float	getmin(float a, float b)
{
	return (a < b ? a : b);
}

// 두 점을 return 하도록
vec2	closestPair(vec2* v, int left, int right)
{
	if (right - left <= 3)
	{

	}
}

int main()
{
	// x에 대해 정렬 된 좌표들
	vec2 v[] = { {1,0}, {2,1}, {3,5}, {4,3} };
	
}