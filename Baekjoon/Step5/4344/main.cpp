#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	int		iter;
	int		n;
	int		up;
	float	sum;
	float	avg;
	float	per;

	cin >> iter;
	for (int k = 0; k < iter; ++k)
	{
		cin >> n;
		int* scores = new int[n];
		for (int i = 0; i < n; ++i)
			cin >> scores[i];
		sum = 0;
		for (int i = 0; i < n; ++i)
			sum += scores[i];
		avg = sum / n;
		up = 0;
		for (int i = 0; i < n; ++i)
			if (scores[i] > avg)
				up++;
		per = (float)up / n;
		cout << fixed << setprecision(3) << per * 100 << "\%\n";
		delete[] scores;
	}
}