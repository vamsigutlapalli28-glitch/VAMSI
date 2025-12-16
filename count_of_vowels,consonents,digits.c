#include <stdio.h>
int main(){
	char str[1000] ;
	fgets(str,sizeof(str),stdin);
	int v = 0,c= 0,d=0 ;
	int i;
	for(i= 0 ;str[i]!='\0';i++){
		char ch = str[i];
		if(ch>=0 && ch<=9)d++ ;
		else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')v++ ;
		else c++ ;
	}
	printf("vowels=%d  , consonents=%d ,digits = %d",v,c,d);
	return 0;
}
