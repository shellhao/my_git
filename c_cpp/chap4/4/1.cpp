/* students please write your program here */

#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
//构造函数
    Integer(int num){
        _num = num;
    }
    int get_num(){
        return _num;
    }
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b){//辗转相除法求最大公约数
    int tmp;
    int b_num;
    b_num = b.get_num();
    if (_num < b_num){
        tmp = _num;
        _num = b_num;
        b_num = tmp;
    }
    while(_num % b_num != 0){
        tmp = b_num;
        b_num = _num % b_num;
        _num = tmp;

    }

    return b_num;
    }
    
};

int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}
