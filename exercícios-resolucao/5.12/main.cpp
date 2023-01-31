#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int x, y;
	
	cout << "Informe dois valores inteiros: ";
	cin >> x >> y;
	
	if(x%y == 0)
		cout << "\n\nO primeiro numero e multiplo do segundo\n\n";
		
	system("pause");
	
	return 0;
}
