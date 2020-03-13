#include<iostream>
using namespace std;

// 输出一个数组的最大子数组之和




int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int MaxSum,CurrSum;
    MaxSum = CurrSum = arr[0];
    for(int i = 1; i < n; i++){
        if(CurrSum < 0){
            CurrSum = 0;
        }
        if(CurrSum > 0){
            if(CurrSum > MaxSum){
                MaxSum = CurrSum;
            }
        }
        CurrSum += arr[i];
    }
    cout<<MaxSum<<endl;

    delete [] arr;

}