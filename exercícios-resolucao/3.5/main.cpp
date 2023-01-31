#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float y, x;
	
	cout << "Informe x: ";
	cin >> x;
	
	y = (log(x*x)/log(3)) + exp(1) + exp(M_PI) + pow(M_PI, exp(1));
	
	cout << "\n\nY: " << y << "\n\n";
	
	system("pause");
	
	return 0;
}
