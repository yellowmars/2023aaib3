///week11-5複習剝皮法
#include <iostream>
using namespace std;
int main()
{
        int n=12345;///輸入的n是12345幫你寫好了
        cout<<"原本的n是: "<<n<<"\n";
        cout<<"剝下最右邊的皮: "<<n%10<<"\n";
        n=n/10;
        cout<<"n變小了，現在: "<<n<<"\n";

        cout<<"剝下最右邊的皮: "<<n%10<<"\n";
        n=n/10;
        cout<<"n變小了，現在: "<<n<<"\n";

        cout<<"剝下最右邊的皮: "<<n%10<<"\n";
        n=n/10;
        cout<<"n變小了，現在: "<<n<<"\n";

        cout<<"剝下最右邊的皮: "<<n%10<<"\n";
        n=n/10;
        cout<<"n變小了，現在: "<<n<<"\n";

        cout<<"剝下最右邊的皮: "<<n%10<<"\n";
        n=n/10;
        cout<<"n變小了，現在: "<<n<<"\n";
}
