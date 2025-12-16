#include <stdio.h>
void myfunction();
void motherfunction();
int main(){
	myfunction();
	return 0;
}
void myfunction(){
	printf("welocome to c progdramming\n");
	motherfunction();
}
void motherfunction(){
	printf("hello world");
}
