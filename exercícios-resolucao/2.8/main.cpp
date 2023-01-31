#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float n_1, n_2, result;
	
	cout << "Digite dois valores para calcular a media aritmetica: ";
	cin >> n_1 >> n_2;
	
	result = (n_1 + n_2)/2.0;
	
	cout << "A media e: " << result << endl << endl;
	
	system("pause");
	
	
	return 0;
}
