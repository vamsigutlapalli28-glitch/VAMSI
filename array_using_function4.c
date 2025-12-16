#include <stdio.h>
void modify(int *arr){
	arr[0]= 99 ;
	arr[1]= 100 ;
}
int main(){
	int a[3]= { 1,2,3 };
	modify(a);
	printf("%d %d %d",a[0],a[1],a[2]);
}
