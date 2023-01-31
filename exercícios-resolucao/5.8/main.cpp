#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c;
	bool ret, ac, ob;
	
	cout << "Informe os lados do triangulo: ";
	cin >> a >> b >> c;
	
	ret = a*a == (b*b + c*c);
	ac = a*a < (b*b + c*c);
	
	if(ret)
		cout << "\n\nE um triangulo retangulo\n\n";
	if(ac)
		cout << "\n\nE um triangulo acutangulo\n\n";
	if(!(ret ^ ac))
		cout << "\n\nE um triangulo Obtusangulo\n\n";
		
	system("pause");
	return 0;
}
