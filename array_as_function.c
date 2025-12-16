#include <stdio.h>
void myfun(int m ,int n,int arr[m][n]){
	int i ;
	int j ;
	for(i=0 ;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
	}
}
int main(){
	int m = 3;
	int n = 3 ;
	int arr[m][n]= {1,2,4,3,4,5,6};
	myfun(m,n,arr);
	return 0;
}
