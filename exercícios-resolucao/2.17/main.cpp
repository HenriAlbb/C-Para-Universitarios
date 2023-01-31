#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float r, g;
	
	cout << "Informe o angulo em radianos: ";
	cin >> r;
	
	g = (r*180)/M_PI;
	
	cout << "O angulo em graus e: " << g << endl;
	
	system("pause");
	
	return 0;
}
