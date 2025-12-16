#include <stdio.h>
int main(){
 	int n ;
 	int digit ,reversed=0;
 	scanf("%d",&n);
 	while(n>0){
 		digit = n%10 ;
 		reversed = reversed*10 + digit ;
 		n = n/10 ;
	 }
	printf("%d",reversed);
	return 0 ;
}
