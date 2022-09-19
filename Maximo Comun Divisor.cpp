#include <iostream>

using namespace std;

int mcd(int, int);
int main() {
	int a, b, resultado;
	
	a = 364332;
	b = 30252;
	
	resultado = mcd(a,b);
	cout << "El maximo comun divisor entre " << a << " y " << b << " es: " << resultado << endl;
	//cout << "MCD(" << a << ", " << b << ") = " << mcd(a,b) << endl;
	return 0;
}

int mcd(int a, int b) {
	if (a < b) {
		return mcd(b,a);
	} else if (b == 0) {
		return a;
	}
	return mcd(b, a % b);
}
