#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float y, x;
	
	cout << "Informe x: ";
	cin >> x;
	
	y = sqrt((x*x + 3.0)/(2.0));
	
	cout << "\n\nY: " << y << "\n\n";
	
	system("pause");
	
	return 0;
}
