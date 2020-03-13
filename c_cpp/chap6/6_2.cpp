// 矩阵转置

#include<iostream>
using namespace std;

void MatrixReverse(int a[3][3]);
void Matrixprint(int a[3][3]);

int main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    Matrixprint(a);
    MatrixReverse(a);
    
}

void MatrixReverse(int a[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<i;j++){
            
            int tmp;
            tmp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = tmp;
            
            
        }
    }
    Matrixprint(a);
}

void Matrixprint(int a[3][3]){
    int i;
    for(i=0;i<3;i++){
        for(int&e:a[i]){
        cout<<e<<"  ";
        }
        cout<<endl;
    }
}