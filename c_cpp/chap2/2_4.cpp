//求1~n之和

#include<iostream>
using namespace std;

int main()
{
    int n,sum,i;
    sum = i = 0;
    cout<<"input a number n:"<<endl;
    cin>>n;
    while(i<=n){
        sum += i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}