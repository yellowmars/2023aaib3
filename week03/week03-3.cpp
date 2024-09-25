///要複習string及iostream con cout
#include <iostream>
#include <string>
using namespace std; ///所以之後就不用再 string cin cout 前面加std::
int main()
{
    string s;
    cout<<"請輸入一個很長的字串，中間不要有空格: ";
    cin>>s;
    cout<<"字串"<<s<<"的長度是"<<s.length()<<"\n";
    for(int i=0;i<s.length();i++){
        cout<<i<<":"<<s[i]<<endl;///endl 小寫L 就是"\n"
    }

}
