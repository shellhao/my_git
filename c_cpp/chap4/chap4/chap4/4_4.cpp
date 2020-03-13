//4_4.cpp
//������

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
	}	//���캯�� ����
	point(point &p);	//���ƹ��캯��
	int getX() { return x; }
	int	getY() { return y; }
	~point();
private:
	int x, y;

};

point::point(point &p)	//���ƹ��캯����ʵ��
{
	x = p.x;
	y = p.y;
	cout << "calling the copy constructor of point" << endl;
}

point::~point()	//��������
{
}

//������
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

//�����Ĺ��캯��
line::line(point xp1,point xp2):p1(xp1),p2(xp2)
{
	cout << "calling constructor of line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x*x + y * y);

}

//�����ĸ��ƹ��캯��
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
	line line1(myp1,myp2);//����line��Ķ���
	line line2(line1);	//���ø��ƹ��캯������һ���¶���
	cout << "the length of line1 is ";
	cout << line1.getLen() << endl;
	cout << "the length of line2 is ";
	cout << line2.getLen() << endl;
	return 0;

}