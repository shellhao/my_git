//4_4.cpp
//类的组合

#include<iostream>
#include<cmath>
using namespace std;

class point
{
public:
	point(int xx = 0, int yy = 0) 
	{
		x = xx;
		y = yy;
	}	//构造函数 内联
	point(point &p);	//复制构造函数
	int getX() { return x; }
	int	getY() { return y; }
	~point();
private:
	int x, y;

};

point::point(point &p)	//复制构造函数的实现
{
	x = p.x;
	y = p.y;
	cout << "calling the copy constructor of point" << endl;
}

point::~point()	//析构函数
{
}

//类的组合
class line
{
public:
	line(point xp1, point xp2);
	line(line &l);
	double getLen()
	{
		return len;
	}
	~line();

private:
	point p1, p2;
	double len;

};

//组合类的构造函数
line::line(point xp1,point xp2):p1(xp1),p2(xp2)
{
	cout << "calling constructor of line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x*x + y * y);

}

//组合类的复制构造函数
line::line(line &l):p1(l.p1),p2(l.p2)
{
	cout << "calling the copy constructor of line" << endl;
	len = l.len;
}
line::~line()
{
}

int main()
{
	point myp1(1, 1), myp2(2, 2);
	line line1(myp1,myp2);//建立line类的对象
	line line2(line1);	//利用复制构造函数建立一个新对象
	cout << "the length of line1 is ";
	cout << line1.getLen() << endl;
	cout << "the length of line2 is ";
	cout << line2.getLen() << endl;
	return 0;

}