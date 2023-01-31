#include <iostream>
#include <cmath>



int main(int argc, char** argv) {
	
	float r, area, circ;
	
	printf("Digite um raio de circunferencia: ");
	scanf("%f", &r);
	
	area = M_PI*r*r;
	circ = 2*M_PI*r;
	
	printf("area: %f \n circunferencia: %f \n", area, circ);
	
	system("pause");
	
	return 0;
}
