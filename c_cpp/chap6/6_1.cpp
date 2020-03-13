#include<iostream>
#include<cmath>
using namespace std;

class SavingAccount
{
private:
    /* date */
    int _id;//账号
    double _balance;//余额
    double _rate;//存款年利率
    int _lastdate;//上次变更余额的时期
    double _accumulation;//余额累加之和
    static double total; //所有账户的总金额

    void record(int date, double amount);
    double accumulation(int date) const{
        return _accumulation + _balance*(date - _lastdate);
    }
public:
    SavingAccount(int date, int id, double rate);
    int getId();
    double getBalance();
    double getRate();
    static double getTotal();
    void show();
    void deposit(int date, double amount);
    void withdraw(int date, double amount);
    void settle(int date);
    ~SavingAccount();
};

double SavingAccount::total = 0;

SavingAccount::SavingAccount(int date, int id, double rate):_id(id),_balance(0),_rate(rate),_lastdate(date),_accumulation(0)
{
    cout<<date<<"\t"<<id<<" is created"<<endl; 
}

void SavingAccount::record(int date, double amount){
    _accumulation = accumulation(date);
    _lastdate = date;
    amount = floor(amount * 100 + 0.5)/100;
    _balance += amount;
    total += amount;

}

int SavingAccount::getId(){
    return _id;
}

double SavingAccount::getBalance(){
    return _balance;
}

double SavingAccount::getRate(){
    return _rate;
}

double SavingAccount::getTotal(){
    return total;
}

void SavingAccount::show(){
    cout<<_id<<"\t"<<_balance<<endl;
}

void SavingAccount::deposit(int date, double amount){
    record(date,amount);
}

void SavingAccount::withdraw(int date, double amount){
    record(date,-amount);
}

void SavingAccount::settle(int date){
    double interest  = accumulation(date)*_rate/365;
    if (interest != 0)
    {
        record(date, interest);
    }
    _accumulation = 0;
    
}

SavingAccount::~SavingAccount()
{
    cout<<"delete account"<<endl;
}

int main(){
    //建立账户
    SavingAccount sa0(1,123,0.015);
    SavingAccount sa1(1,456,0.015);

    //几笔账目
    sa0.deposit(5,5000);
    sa1.deposit(25,10000);
    sa0.deposit(45,5500);
    sa1.withdraw(60,4000);


    sa0.settle(90);
    sa1.settle(90);

    sa0.show();
    sa1.show();

    cout<<"total:"<<SavingAccount::getTotal()<<endl;

    return 0;
}
