#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c, d, e, f;
	float x, y;
	float d0, dx, dy;
	
	cout << "Informe os coeficientes a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;
	
	d0 = a*e - b*d;
	dx = c*e - b*f;
	dy = a*f - c*d;
	
	x = dx/d;
	y = dy/d;
	
	if(d0 == 0 && dx == 0 && dy == 0)
		cout << "\n\nExiste infinitas solucoes";
	if(d0 == 0 && (dx != 0 || dy !=0))
		cout << "\n\nNao existe solucao";
	if(d0 != 0)
		cout << "\n\nX: " << x << ", Y: " << y;
		
	cout << "\n\n"	;
	
	system("pause");
		
	
	return 0;
}
