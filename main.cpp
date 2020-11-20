#include <iostream>
using namespace std;

double my_pow(double num, unsigned int deg)
{
	double result = num;
	for (int i = 0; i < deg - 1; i++)
	{
		result *= num;
	}
	return result;
}

int main()
{
	double num;
	int	deg;
	cin >> num;
	cin >> deg;
	cout.precision(6);
	cout << "> " << my_pow(num, deg);
	return 0;
}