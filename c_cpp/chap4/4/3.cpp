/* students please write your program here */

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c){
        _a = a;
        _b = b;
        _c = c;
    }
    //根据根的情况分6种
    void solve(){
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        double delta,x1,x2;
        float a,b,c;
        a = _a;
        b = _b;
        c = _c;
        delta = (b*b-4*a*c);

        //第一种情况：有两个不相等实根
        if(a!=0){
        
        if(delta > 0 ){
             cout<<1<<endl;
            x1 = (-b-sqrt(delta))/(2.0*a);
            x2 = (-b+sqrt(delta))/(2.0*a);
            if(x1 < x2)
                cout<<x1<<" "<<x2<<endl;
            else
            {
                cout<<x2<<" "<<x1<<endl;
            }
             
        }
        //第二种情况：两个相等实根
        else if(delta == 0){
            
            cout<<2<<endl;
            x1 = (-b-sqrt(delta))/(2*a);
            cout<<x1<<endl;     
        }
        //第三种情况：共轭复根
        else{
            cout<<3<<endl;
        }
        }
        else
        {
           //第四种情况：无解
        if(b==0&&c!=0){
            cout<<4<<endl;
        }
        //第五种情况：无穷解
        else if (b==0&&c==0)
        {
            cout<<5<<endl;
        }
        //第六种情况：只有一个解
        else //if (a==0&&b!=0)
        {
            cout<<6<<endl;
            x1 = -c/b;
            cout<<x1<<endl;
        }
        }
        
        
    }
};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}

