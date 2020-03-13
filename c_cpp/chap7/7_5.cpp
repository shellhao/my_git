// 声明一个基类Baseclass，整形成员变量number， 构造其派生类DerivedClass，观察构造函数和析构函数的执行情况

#include<iostream>
using namespace std;

class BaseClass
{
private:
    /* data */
public:
    BaseClass(/* args */);
    ~BaseClass();
    int Number;

};

BaseClass::BaseClass(/* args */)
{
    cout<<"baseclass constractor called"<<endl;
}

BaseClass::~BaseClass()
{
    cout<<"baseclass destractor called"<<endl;
}

class DerivedClass:public BaseClass
{
private:
    /* data */
public:
    DerivedClass(/* args */);
    ~DerivedClass();
};

DerivedClass::DerivedClass(/* args */)
{
    cout<<"derivedClass constractor called"<<endl;
}

DerivedClass::~DerivedClass()
{
    cout<<"DerivedClass destractor called"<<endl;
}

int main(){
    DerivedClass a;
}
