#include <stdio.h>
int main(){
	int arr[5] = { 10,20,30,40,50};
	int *p = arr ;
	int sum = 0 ;
	int i ;
	for(i = 0; i<5;i++){
		sum += *(p+i);
	}
	printf("%d",sum);
	return 0 ;
}
