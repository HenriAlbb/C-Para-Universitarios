#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	
	float r, g;
	
	printf("Informe um angulo em radianos: ");
	scanf("%f", &r);
	
	g = (r*180)/M_PI;
	
	printf("\n\nGraus: %f\n\n", g);
	
	system("pause");
	
	return 0;
}
