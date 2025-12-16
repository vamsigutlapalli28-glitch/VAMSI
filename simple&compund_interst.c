#include <stdio.h>
#include <math.h>
int main(){
	float p ,r,t ;
	scanf("%f %f %f",&p,&r,&t);
	float si , ci ;
	si = (p*r*t)/100 ;
	ci = p*pow((1+r/100),t)-p ;
	printf("%f %f",si,ci);
	return 0;
}
