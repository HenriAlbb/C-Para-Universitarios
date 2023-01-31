#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float p1, p2, t1, t2, ft, fa, media, frequencia;
	
	cout << "Informe todas as notas do semestre letivo: ";
	cin >> p1 >> p2 >> t1 >> t2;
	
	cout << "Agora informe a frequencia total de aulas da diciplina e do aluno: ";
	cin >> ft >> fa;
	
	media = (p1*3 + p2*5 + t1*1 + t2*1)/10;
	frequencia = (fa/ft)*100;
	
	cout << endl << endl;
	cout << "A media ponderada e: " << media << endl;
	cout << "A frequencia e de: " << frequencia << "%" << endl;
	
	system("pause");
	
	return 0;
}
