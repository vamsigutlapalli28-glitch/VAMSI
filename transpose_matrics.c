#include <stdio.h>
int main(){
	int r,c ;
	scanf("%d %d",&r,&c);
	int i,j,a[100][100],trans[100][100];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			trans[j][i]=a[i][j];
	}	
	}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d",trans[i][j]);
		}
	}
	return 0;
}
