///week12-1.cpp�ǲ߸�Ƶ��c��struct vs, class
#include <iostream>
#include <string>
using namespace std;
///struct Node{};///�������������� C�y�������c
///class Cat{};///���e�X�P�A�����йL
struct Node{
int val;///value�Y�g�A�o��Node�̭�����
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
