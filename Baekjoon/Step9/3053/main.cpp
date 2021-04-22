#include <iostream>
#include <iomanip>
#include <cmath>

int		main()
{
	using namespace std;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	const double	pi = 3.14159265359;

	int	R;
	cin >> R;
	
	cout << fixed << setprecision(6) << (double)R * R * pi << '\n';
	cout  << pow(sqrt(2) * (double)R, 2);
}