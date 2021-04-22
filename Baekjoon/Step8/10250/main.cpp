#include <iostream>
#include <iomanip>

void print()
{
	using namespace std;
	
	int	H, W, N;

	cin >> H >> W >> N;

	int den, num;
	den = (N % H == 0) ? N / H - 1 : N / H;
	num = (N % H == 0) ? H : N % H;
	cout << num << setw(2) << setfill('0') << 1 + den << '\n';
}

int main()
{
	using namespace std;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
		print();
}