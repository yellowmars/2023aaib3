#include <stdio.h>
int main()
{
	char s[200];
	scanf("%s",s);
	for(int i=0;s[i]!=0;i++){
		char c=s[i];
		if(s[i]!='2') printf("%C",c);
	}
	printf("\n");

}