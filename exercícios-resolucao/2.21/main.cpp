#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float c, f;
	
	cout << "Informe a temperatura em graus Celsius(C): ";
	cin >> c;
	
	f = ((9*c)/5) + 32;
	
	cout << "A temperatura em graus Farenheit(F) e: " << f << endl;
	
	system("pause");
	
	return 0;
}
