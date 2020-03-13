#include <iostream>
using namespace std;
 
class Integer{
private:
    int _num;
//getLength()函数获取_num长度
    int getLength(){
        int len = 0;
        while(_num != 0 ){
            _num = _num / 10;
            len++;
        }
        return len;

    }
public:
//Integer类构造函数
    Integer(int num){
        _num = num;
    }
//反转_num
    int inversed(){
        int len;
        int __num = _num;
        int new_num=0;
         int *arr=new int[len]; 
        len = getLength();
        for(int i = 0;i<len;i++){
            arr[i] = __num%10;
            __num = __num / 10; 
        }
        for(int i = 0;i<len;i++){
            new_num += arr[i];
            new_num = new_num*10;
        }
        return new_num/10;

    }
};
 
int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}
