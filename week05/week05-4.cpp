#include <stdio.h>//scanf()
#include <iostream>//cout
#include <string> //tolower() find()
using namespace std;
int main()
{//step06:keyboard keys string
	string s="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;//step01:Input
	while(scanf("%c",&c)==1){
		c=tolower(c);//step03:tolower(c)
		if(c==' ' || c=='\n') cout<<c;//step02:Output
		else{
			int i=s.find(c);//step04:find()
			cout<<s[i-2];//step05:Output s[i-2]
		}
	}
}