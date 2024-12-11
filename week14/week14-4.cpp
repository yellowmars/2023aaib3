#include <iostream>
using namespace std;
int main()
{
	int a,b;//step01:Input
	while(cin>>a>>b){
		while(a>0){//step03
			cout<<a<< " ";
			a=a/b;
		}
		cout<< "Boring!\n";
	}//step02:Output
}