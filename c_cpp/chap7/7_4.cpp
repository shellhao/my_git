/* 
声明一个基类animal，有私有整形成员变量age，构造其派生类dog，成员函数SetAge(int n)

*/

#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"Animal constractor called"<<endl;
    }
    ~Animal(){
        cout<<"Animal destractor called"<<endl;
    }
  //  private:
    int age;
};

class dog:public Animal
{
private:
    /* data */
    //int age;
public:
    dog(/* args */);
    ~dog();
    void SetAge(int n);
    void PrintAge();
};

dog::dog(/* args */)
{
    cout<<"dog constractor called"<<endl;
}

dog::~dog()
{
    cout<<"dog destractor called"<<endl;
}

void dog::SetAge(int n)    
{
    Animal::age = n;

}


int main(){
    int x;
    cin>>x;
    dog d;
    Animal a;
    d.SetAge(x);
}
