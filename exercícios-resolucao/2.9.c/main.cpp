#include <iostream>



int main(int argc, char** argv) {
	
	float prova_1, prova_2, trab_teo, trab_lab, media;
	
	printf("Insira as notas...");
	
	printf("\n	Prova 1: ");
	scanf("%f", &prova_1);
	
	printf("\n	Prova 2: ");
	scanf("%f", &prova_2);
	
	printf("\n	Trabalho de Teoria: ");
	scanf("%f", &trab_teo);
	
	printf("\n	Trabalho de Laboratorio: ");
	scanf("%f", &trab_lab);
	
	media = (prova_1*3 + prova_2*5 + trab_teo*1 + trab_lab*1)/(3+5+1+1);
	
	printf("\n\n	Media: %f \n", media);
	
	system("pause");
	return 0;
}
