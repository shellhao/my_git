//输入一个整数，求这个整数的所有的因子

#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"input a number:"<<endl;
    cin>>n;
    for (int k = 1; k <= n; k++)
    {
        if (n%k == 0)
        {
            cout<<k<<endl;
        }
        
    }
    return 0;
    
}