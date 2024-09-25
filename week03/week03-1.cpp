///除惡勿禁
///因為rangr-based for迴圈必須在c++11(2011之後)才能用，如使用C++98(1998年版)會無法編譯，執行出錯
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(char c:s){
		if(c!='2') cout<<c;
	}
	cout<<"\n";


}

