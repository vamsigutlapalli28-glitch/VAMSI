#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i ;
	int *arr ;
	arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(i=0;i<n;i++){
		sum += arr[i];
	}
	printf("%d",sum);
	free(arr);
	return 0;
}
