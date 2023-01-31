#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x;
	int y;
	
	
	cout << "Informe um numero: ";
	cin >> x;
	
	y = x;
	
	if(y==x)
		cout << "\n\nNumero inteiro\n\n";
	else	
		cout << "\n\nNao e numero inteiro\n\n";
		
	system("pause");
	
	return 0;
}
