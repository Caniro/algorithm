#include <iostream>

int main()
{
	using namespace std;
	int		n;
	float	max = 0;
	float	sum;

	cin >> n;
	float* score = new float[n];
	for (int i = 0; i < n; ++i)
		cin >> score[i];
	for (int i = 0; i < n; ++i)
		if (score[i] > max)
			max = score[i];
	for (int i = 0; i < n; ++i)
		score[i] *= 100 / max;
	sum = 0;
	for (int i = 0; i < n; ++i)
		sum += score[i];
	cout << sum / n;
}