#include <iostream>


int main(int argc, char** argv) {
	
	float a, b, c;
	float p1, p2, p3;
	float media;
	
	printf("--<<Informe as notas e os pesos respectivamente>>--");
	
	printf("\nNota 1: ");
	scanf("%f", &a);
	
	printf("  Peso 1: ");
	scanf("%f", &p1);
	
	printf("\nNota 2: ");
	scanf("%f", &b);
	
	printf("  Peso 2: ");
	scanf("%f", &p2);
	
	printf("\nNota 3: ");
	scanf("%f", &c);
	
	printf("  Peso 3: ");
	scanf("%f", &p3);
	
	media = (a*p1 + b*p2 + c*p3)/(p1 + p2 + p3);
	
	printf("\n\nMedia: %f\n\n", media);
	
	system("pause");
	
	
	return 0;
}
