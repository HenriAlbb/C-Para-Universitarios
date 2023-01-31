#include <iostream>

int main(int argc, char** argv) {
	
	float p1, p2, t1, t2, media;
	float aulas, presenca, freq;
	
	printf("<<Informe as notas e a frequencia>> ");
	
	printf("\nNota 1: ");
	scanf("%f", &p1);
	
	printf("\nNota 2: ");
	scanf("%f", &p2);
	
	printf("\nNota 3: ");
	scanf("%f", &t1);
	
	printf("\nNota 4: ");
	scanf("%f", &t2);
	
	printf("\n\nQuantidade de aulas: ");
	scanf("%f", &aulas);
	
	printf("Quantidade de aulas frequentadas: ");
	scanf("%f", &presenca);
	
	media = (3*p1 + 5*p2 + 1*t1 + 1*t1)/(3 + 5 + 1 + 1);
	
	freq = (presenca/aulas)*100;
	
	printf("\n\nMedia: %f \nFrequencia: %f\n\n", media, freq);
	
	system("pause");
	
	
	
	
	return 0;
}
