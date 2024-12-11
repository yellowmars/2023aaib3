#include <iostream>
using namespace std;
int main()
{
	int a,b;//step01:Input
	while(cin>>a>>b){
		int bad=0,backup=a;
		while(a>0){//step03
			if(a!=1&&a%b>0) bad=1;
			a=a/b;
		}
		if(bad==1) cout<< "Boring!\n";
		else{
			a=backup;
			while(a>0){
				cout<<a<< " ";
				a=a/b;
			}
			cout<<"\n";
		}
	}//step02:Output
}