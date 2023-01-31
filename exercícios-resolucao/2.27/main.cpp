#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int v1, v2;
	float m;
	
	cout << "Digite dois valores: ";
	cin >> v1 >> v2;
	
	m = ((double)v1+v2)/2;
	//m = double(v1+v2)/2;
	//m = (v1+v2)/2;
	
	cout << "A media e: " << m << endl;
	
	system("pause");
	
	
	return 0;
}
