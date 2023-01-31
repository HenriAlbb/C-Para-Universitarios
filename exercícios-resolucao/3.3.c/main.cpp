#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float d, x2, x1, y2, y1;
	
	cout << "Informe quatro valores: ";
	cin >> x2 >> x1 >> y2 >> y1;
	
	d = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
	
	cout << "\n\nResultado: " << d << "\n\n";
	
	system("pause");
	
	return 0;
}
