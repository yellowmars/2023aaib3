#include <iostream>
using namespace std;
class Cat{
public:
    void print(){
    cout<<"I am a Cat,meow,meow\n";
    }
};
class Mouse{
public:
    void print(){
        cout<<"I am a mouse ch,ch\n";
    }
};
int main()
{
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
