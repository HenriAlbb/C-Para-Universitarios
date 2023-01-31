#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float f, k;
	
	cout << "Informe a temperatura em graus Farenheit(F): ";
	cin >> f;
	
	k = (((f-32)*5)/9) + 273;
	
	cout << "A temperatura em Kelvin e: " << k << endl;
	
	system("pause");
	
	return 0;
}
