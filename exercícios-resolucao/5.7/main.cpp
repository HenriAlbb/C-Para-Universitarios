#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b;
	
	cout << "Informe dois valores: ";
	cin >> a >> b;
	
	if(a > b)
		cout << "\n\na>b\n\n";
	if(b > a)
		cout << "\n\nb>a\n\n";
	if(a == b)
		cout << "\n\na==b\n\n";
		
	system("pause");
	return 0;
}
