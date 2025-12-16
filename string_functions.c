#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	printf("string length= %d\n",strlen(a));
	printf("string copy = %s\n",strcpy(a,b));
	printf("string concat=%s\n",strcat(b,a));
	printf("compare = %d\n",strcmp(a,b));
	printf("reverse = %s\n",strrev(a));
	return 0;
}
