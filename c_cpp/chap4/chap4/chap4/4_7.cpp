//使用结构体

#include<iostream>
#include<string>

using namespace std;

struct student
{
	int num;
	string name;
	char gender;
	int age;

};

int main() {
	student ST1 = { 1,"zheng",'m',18 };
	cout << ST1.age << ST1.gender << ST1.name << ST1.num << endl;

	return 0;
}