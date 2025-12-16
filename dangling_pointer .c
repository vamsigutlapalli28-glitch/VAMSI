#include <stdio.h>
int main(){
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 42 ;
	free(ptr);//memory freed 
	 //printf("%d",*ptr);// dangling point 
	ptr = NULL ;
	return 0 ;
}
