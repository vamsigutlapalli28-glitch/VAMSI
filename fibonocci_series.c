#include <stdio.h>
	int fab(int n){
	if(n<=1)return n ;
	return fab(n-1)+fab(n-2);
	}
	int main(){
		int n,i ;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("%d",fab(i));
		}
		return 0;
	}

