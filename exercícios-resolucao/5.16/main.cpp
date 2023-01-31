#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x1, y1, x2, y2;
	float d1, d2;
	
	cout << "Ponto 1 (x1, y1): ";
	cin >> x1 >> y1;
	
	cout << "\nPonto 2 (x2, y2): ";
	cin >> x2 >> y2;
	
	d1 = sqrt(x1*x1 + y1*y1);
	d2 = sqrt(x2*x2 + y2*y2);
	
	if(d1 > d2)
		cout << "\n\nO ponto 2 e mais proximo da origem (0, 0)";
	else
		cout << "\n\nO ponto 1 e mais proximo da origem (0, 0)"	;
	
	cout << "\n\n";
	
	system("pause");
		
	
	return 0;
}
