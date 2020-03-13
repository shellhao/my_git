// 判断子序列回文序列的个数

#include<iostream>
#include<string>
using namespace std;
static int num = 0;

string StringReve(const string str, int len){//把一个字符串反转
    string str_tmp=str;
    int i = 0;
    while(i<len){
        str_tmp[len - i - 1] = str[i];
        i++;
    }
    return str_tmp;
}
int isHuiwen(const string str, int len){ //判断是否为回文序列，是返回1 不是返回0
    if(str == StringReve(str,len)){
        return 1;
    }
    else
        return 0;
}


string Get_subString(const string str, int len, int sub_len){//从长度为len的str中获取长度为sub_len的子序列


}

void printStr(string str, int i, string chars){
    if(i == str.length()){
        cout<<chars<<endl;
        if (chars.length() > 0 && isHuiwen(chars,chars.length()))
        {
            num++;
            cout<<"confirmed: "<<chars<<endl;
        }
        
    }
    else
    {
        printStr(str,i+1,chars);
        printStr(str,i+1,chars+str[i]);
    }
    
    
}
int main(){
    string str, str1;
    getline(cin, str);
    int len = str.length();
    cout<<len<<endl;
    int sum = 0; //回文序列的个数
    //获取子序列，并且判断是否是回文（只能用数组操作吧）
    str1 = str;
    printStr(str,0,"");
    cout<<num;

    return 0;
    


      

}