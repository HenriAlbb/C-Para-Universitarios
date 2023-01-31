#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c;
	bool x, y, z;
	
	cout << "Informe os tres lados de um triangulo: ";
	cin >> a >> b >> c;
	
	x = a < b + c;
	y = b < a + c;
	z = c < b + a;
	
	if(x && y && z)
		cout << "\n\nO triangulo existe\n\n";
	else
		cout << "\n\nO trinagulo nao existe\n\n";
		
	system("pause");
	
	return 0;
}
