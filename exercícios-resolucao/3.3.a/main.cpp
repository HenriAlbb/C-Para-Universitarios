#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float y, x;
	
	cout << "Insirar um valor: ";
	cin >> x;
	
	y = (log(pow(x, 2.0))/log(3)) + exp(1) + exp(M_PI) + pow(M_PI, exp(1));
	
	cout << "\n\nResultado da funcao: " << y << "\n\n";
	
	system("pause");
	
	return 0;
}
