  /* students please write your program here */
#include <iostream>
using namespace std;


class Yuebao
{
static double profitRate;
public:
    Yuebao(int amount){
        _amount = amount;
    }
    static void setProfitRate(double rate);
    static void addProfit();
    static void deposit(double amount);
    static void withdraw(double amount);
    double getBalance();

private:
    static double _amount;
/* Your code here! */
};
double Yuebao::_amount = 0;
double Yuebao::profitRate = 0;

void Yuebao::setProfitRate(double rate){
    profitRate = rate;
}

void Yuebao::addProfit(){
    _amount += _amount*profitRate;
}

void Yuebao::deposit(double amount){
    _amount += amount;
}

void Yuebao::withdraw(double amount){
    _amount -= amount;
}

double Yuebao::getBalance(){
    return _amount;
}

  
int main()
{
    int n;
    while(cin >> n)
    {
        double profitRate;
        cin >> profitRate;
        Yuebao::setProfitRate(profitRate);//设定鱼额宝的利率
        Yuebao y(0); //新建鱼额宝账户，余额初始化为0
        int operation;//接受输入判断是存还是取
        double amount;//接受输入存取金额
        for (int i = 0; i < n; ++i)
        {
            y.addProfit();//加入前一天余额产生的利息
            cin >> operation >> amount;
            if (operation == 0)
                y.deposit(amount);//存入金额
            else
                y.withdraw(amount);//取出金额
        }
        cout << y.getBalance() << endl;//输出最终账户余额
    }
    return 0;
}
