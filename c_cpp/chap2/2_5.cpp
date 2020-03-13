//将各位翻转输出

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"input n:"<<endl;
    cin>>n;
    while(n>10)
    {
        cout<<n%10;
        n=n/10;
    }
    cout<<n<<endl;
}