///week12-1.cpp學習資料結構的struct vs, class
#include <iostream>
#include <string>
using namespace std;
///struct Node{};///都有分號的結尾 C語言的結構
///class Cat{};///之前幾周，都有教過
struct Node{
int val;///value縮寫，這個Node裡面的值
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;


}
