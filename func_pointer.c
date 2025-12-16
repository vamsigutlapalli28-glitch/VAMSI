#include <stdio.h>
void greet(){
	printf("Hello!\n");
}
	int main(){
		void (*funcptr)()= greet ;
		funcptr();
		return 0;
	}

