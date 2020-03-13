#include<iostream>
using namespace std;

class Employee
{
private:
    /* data */
    char *_name;
    char *_address;
    char *_city;
    int _code;
    
public:
    Employee();
    Employee(char* name,char* address, char* city, int code);
    void Display();
    void ChangeName(char *name);
    ~Employee();
};

Employee::Employee(char* name, char* address, char* city, int code):_name(name),_address(address),_city(city),_code(code)
{
    /*_name = name;
    _address = address;
    _city = city;
    _code = code;*/
    cout<<"create account"<<endl;
}

void Employee::ChangeName(char *name){
    _name = name;
}
void Employee::Display(){
    cout<<_name<<"  "<<_address<<"  "<<_city<<"  "<<_code<<endl;
}

Employee::~Employee()
{
    cout<<"delete data"<<endl;
}

int main(){
    Employee a[3]={Employee("zheng","zhengzhou","henan",10010),Employee("dong","changde","hunan",10086),Employee("family","hangzhou","zhejiang",1314)};
    for(Employee &e:a){
        e.Display();
        e.ChangeName("Love");
        e.Display();
    }
    return 0;
}