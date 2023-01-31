#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a, b, c, p1, p2, p3, result;
	
	cout << "Informe as tres notas: ";
	cin >> a >> b >> c;
	
	cout << "Informe os tres pesos de cada nota respectivamente: ";
	cin >> p1 >> p2 >> p3;
	
	result = (a*p1 + b*p2 + c*p3)/(p1 + p2 + p3);
	
	cout << "A media e: " << result << endl << endl;
	
	system("pause");
	return 0;
}
