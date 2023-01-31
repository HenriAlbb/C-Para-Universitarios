#include <iostream>

int main(int argc, char** argv) {
	
	int n, a;
	
	printf("Informe um numero inteiro de cinco digitos: ");
	scanf("%d", &n);
	
	a = n/10000;
	n = n%10000;
	
	printf("\n\n%d", a);
	
	a = n/1000;
	n = n%1000;
	
	printf("  %d", a);
	
	a = n/100;
	n = n%100;
	
	printf("  %d", a);
	
	a = n/10;
	n = n%10;
	
	printf("  %d", a);
	
	a = n/1;
	n = n%1;
	
	printf("  %d", a);
	return 0;
}
