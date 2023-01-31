#include <iostream>

int main(int argc, char** argv) {
	
	int p1, p2;
	float media;
	
	printf("Informe a nota 1 e 2, repectivamente: ");
	scanf("%d %d", &p1, &p2);
	
	media = ((double)p1 + p2)/2;
	
	printf("\n\nMedia: %f\n\n", media);
	
	system("pause");
	
	return 0;
}
