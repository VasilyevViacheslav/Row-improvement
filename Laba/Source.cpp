#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() 
{
	double InitSum = 0;
	double FirstSum = 0;
	double SecondSum = 0;
	double ThirdSum = 0;
	for (int n = 1; n <= 42; ++n) {
		InitSum += (1 / (0.5 * pow(n, 2) + 2.7 * n + 0.3));
		FirstSum+= (((-5.4 * n - 0.6) / ((0.5 * pow(n, 2) + 2.7 * n + 0.3) * pow(n, 2))));
		SecondSum+= ((28.56 * n + 3.24) / ((0.5 * pow(n, 2) + 2.7 * n + 0.3) * pow(n, 3)));
		ThirdSum+= ((-150.984 * n - 17.136) / ((0.5 * pow(n, 2) + 2.7 * n + 0.3) * pow(n, 4)));
	}
	FirstSum += M_PI * M_PI / 3;
	SecondSum += -10.8 * 1.2021 + M_PI * M_PI / 3;
	ThirdSum += -10.8 * 1.2021 + M_PI * M_PI / 3 + 57.12*pow(M_PI, 4) / 90;

	cout << setprecision(15)<< InitSum<< endl << FirstSum<< endl << SecondSum << endl << ThirdSum << endl;


	return 0;
}