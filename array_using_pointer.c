#include <stdio.h>
int main(){
	int arr[5]= {10,20,30,40,50};
	int *ptr = arr ;
	int i ;
	printf("Array elements unsing Pointers :\n");
	for(i =0;i<5;i++){
		printf("%d ",*(ptr+i));
	}
	return 0 ;
}
