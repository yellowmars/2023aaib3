#include <iostream>
using namespace std;
int a[10000];
int main()
{
	int T,N,now;
	cin>>T;//step01: Input
	for(int t=1;t<=T;t++){//Test Case t
		char c,c1;
		cin>>c>>c1>>N;//step01: input
		for(int i=0;i<N*N;i++) cin>>a[i];
		int bad=0;
		for(int i=0;i<N;i++){
			if(a[i]<0) bad=1;
			if(a[i]!=a[N*N-1-i]) bad=1;
			
		}
		if(bad==0) cout<<"Test #"<<t<<": Symmetric.\n";
		else cout<<"Test #"<<t<<": Non-symmetric.\n";
	}//step02: Output
}