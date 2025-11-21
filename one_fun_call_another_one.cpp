#include<stdio.h>
void myfunction();
void motherfunction();
int main(){
	myfunction();
	return 0;
	
}
void myfunction()
{
	printf("welcome vamsi");
	motherfunction();
	
}
void motherfunction ()
{
	printf("hello vamsi");
}
