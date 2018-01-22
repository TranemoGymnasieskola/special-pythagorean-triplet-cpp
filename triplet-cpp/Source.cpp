#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <limits>


using namespace std;

int main() {
    int sum;
    cout << "V\x84nligen ange \x94nskad summa av a+b+c (standard \x84r 1000)" << endl;
    cin >> sum;
    for (int i=0; i < sum; i++) {
    	float c = sum - i;
		float restSum = i;
			for (int j=0; j < restSum; j++) {
			float b = restSum - j;
			float a = sum - b - c;

            float power = 2.0;

				 if (pow(a,power) + pow(b,power) == pow(c,power) && a != 0 && b != 0 && b > a) {
					cout << "talen: " << endl;
					cout << a << endl;
					cout << b << endl;
					cout << c << endl;
					cout << "fyller kravet a^2 + b^2 = c^2, samt a+b+c=" << sum << " och ger oss produken: " << endl;
					cout << a * b * c << endl;
					cout << endl;
					
			}
		}
    }
	system("PAUSE");
}
