#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float c, k;
	
	cout << "Informe a temperatura em graus Celsius(C): ";
	cin >> c;
	
	k = c + 273;
	
	cout << "A temperatura em graus Kelvin(K) e: " << k << endl;
	
	system("pause");
	
	return 0;
}
