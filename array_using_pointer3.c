#include <stdio.h>
int main(){
	int arr[2]= {100,200};
	int *x = &arr[0] ;
	int *y =  &arr[1];
	int temp ;
  	 temp = *x ;
	*x = *y ;
	*y = temp ;
	printf("After swap :%d %d",arr[0],arr[1]);
	return 0 ;
}
