#include <stdio.h>
#include <math.h>

int main (){

	double a, b, c, R1, R2;
	double de;
	scanf("%lf %lf %lf", &a, &b, &c);

	de = b * b - 4 * a * c;

	if (a == 0){

		printf("Impossivel calcular\n");

	}
	else{

		if (de > 0){

			R1 = (-b + pow(de,0.5))/(2*a);
			R2 = (-b - pow(de,0.5))/(2*a);
			printf("R1 = %.5lf\n", R1);
			printf("R2 = %.5lf\n", R2);

		}
		else{

			printf("Impossivel calcular\n");

		}
	}
return 0;
}
