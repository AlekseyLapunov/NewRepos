#include <iostream>
using namespace std;

double my_pow_fast(double num, unsigned int deg)
{
	double result = 1;
	if (!deg) return 1;
	// Если степень положительная
	if (deg > 0)
	{
		while (deg)
		{
			if (deg % 2 == 0)
			{
				deg /= 2;
				num *= num;
			}
			else
			{
				deg--;
				result *= num;
			}
		}
	} else // Если степень отрицательная
		if (deg < 0)
		{
			while (deg)
			{
				if (deg % 2 == 0)
				{
					deg /= 2;
					num *= num;
				}
				else
				{
					deg++;
					result /= num;
				}
			}
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
	cout << "> " << my_pow_fast(num, deg);
	return 0;
}
