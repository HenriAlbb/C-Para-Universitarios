#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int x;
	bool c;
	
	cout << "Informe um numero inteiro: ";
	cin >> x;
	
	c = x%2 == 0;
	
	if(c)
		cout << "\n\nE par\n\n";
	else
		cout << "\n\nE impar\n\n";
		
	system("pause")	;
	
	return 0;
}
