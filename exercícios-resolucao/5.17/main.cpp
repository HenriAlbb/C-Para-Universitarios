#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float x, y;
	bool d, f, l;
	
	cout << "<Elipse>";
	
	cout << "\n\nInforme as coodernadas de um ponto (x, y): ";
	cin >> x >> y;
	
	d = ((x*x)/(2*2)) + ((y*y)/(3*3)) < 1;
	f = ((x*x)/(2*2)) + ((y*y)/(3*3)) > 1;
	
	if(d)
		cout << "\n\nO ponto esta dentro da elipse";
	if(f)
		cout << "\n\nO ponto esta fora da elipse";
	if(!(d ^ f))
		cout << "\n\nO ponto esta na linha da elipse";	
		
	cout << "\n\n";
	
	system("pause");
	
	return 0;
}
