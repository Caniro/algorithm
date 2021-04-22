#pragma once
#include <iostream>
#include <random>
#include <ctime>

namespace yh
{
	class vec2
	{
	public:
		float x = 0;
		float y = 0;

		vec2() {}
		vec2(float _x, float _y) { x = _x; y = _y; }

		void					initRandom(float min, float max)
		{
			static std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
			x = (float)std::uniform_real_distribution<>(min, max)(mersenne);
			y = (float)std::uniform_real_distribution<>(min, max)(mersenne);

		}

		float					getMagnitude()
		{
			return (sqrt(x * x + y * y));
		}

		friend vec2				operator - (vec2 a, vec2 b)
		{
			return (vec2{ a.x - b.x, a.y - b.y });
		}

		friend std::ostream& operator << (std::ostream& out, vec2& v)
		{
			out << "x pos : " << v.x << ", y pos : " << v.y << std::endl;
			return (out);
		}
	};
}
