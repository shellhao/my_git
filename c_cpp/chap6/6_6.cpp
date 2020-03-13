// 输入一个整数数组，输出指定的第k小的数

//思路一：先排序，输出a[k]即可
//思路二：

#include<iostream>
#include<vector>
using namespace std;

void sort(int a[], int n){ //对数组进行排序
    int i,j;
    int tmp;
    for(i = 0; i < n;  i++){
        for(j = 0; j<n-1-i;j++){
            if (a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }



}

int main(){
    int n, num_mark;
    cin>>n>>num_mark;
    int *a = new int[n];

    for(int i = 0;i < n;++i){
        cin>>a[i];
    }
    sort(a,n);
    cout<<a[num_mark-1];
}