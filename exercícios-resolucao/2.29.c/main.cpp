#include <iostream>

int main(int argc, char** argv) {
	
	int n, d;
	
	printf("Informe um numero binario: ");
	scanf("%d", &n);
	
	d = (n/1000)*8;
	n = n%1000;
	
	d = d + (n/100)*4;
	n = n%100;
	
	d = d + (n/10)*2;
	n = n%10;
	
	d = d + (n/1)*1;
	n = n%1;
	
	printf("\n\nNumero decimal: %d\n\n", d);
	
	system("pause");
	return 0;
}
