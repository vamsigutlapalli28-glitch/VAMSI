#include <stdio.h>
#include <string.h>
int main(){
	 char str[1000];
	scanf("%s",&str);
	int left = 0;
	int right = strlen(str)-1 ;
	int ispalindrome = 1;
	while(left<right){
		if(str[left]!=str[right]){
			ispalindrome = 0 ;
		}
		left++ ;
		right-- ;
	}
	if(ispalindrome){
	printf("palindrome");
	}
	else{
	printf("not a palindrome");
 	}
	return 0;
}
