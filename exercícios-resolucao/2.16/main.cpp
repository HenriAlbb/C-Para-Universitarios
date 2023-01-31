#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float g, r;
	
	cout << "Informe o valor do angulo em graus: ";
	cin >> g;
	
	r = (g*M_PI)/180;
	
	cout << "O valor do angulo em radianos e: " << r << endl;
	
	system("pause");
	
	return 0;
}
