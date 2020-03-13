//比较两个数的大小

#include<iostream>
using namespace std; // namespace std

int main()
{
    int x,y;

    cout<<"input two numbers:"<<endl;
    cin>>x>>y;

    if(x>y)
    {
        cout<<x<<">"<<y<<endl;

    }
    else if(x<y)
    {
        cout<<x<<"<"<<y<<endl;
    }
    else
    {
        cout<<x<<"="<<y<<endl;
    }
    return 0;

}