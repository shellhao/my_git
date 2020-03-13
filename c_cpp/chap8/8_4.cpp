//重载两个自增自减运算符
#include<iostream>
using namespace std;

class Point{
private:
    double _x, _y;

public:
    Point(double x, double y):_x(x),_y(y){}
    ~Point(){}
    Point operator ++ (int);
    Point operator -- (int);
    Point &operator -- ();
    Point &operator++();
    void print();
};

Point &Point::operator--(){
    _x--;
    _y--;
    return *this;    
}

Point &Point::operator++(){
    _x++;
    _y++;
    return *this;
}

Point Point::operator ++(int){
    Point old = *this;
    ++(this->_x);
    ++(this->_y);
    return old;
}

Point Point::operator--(int){
    Point old = *this;
    --(this->_x);
    --(this->_y);
    return old;
}

void Point::print(){
    cout<<_x<<" "<<_y<<endl;
}

int main(){
    Point p1(1,1);
    p1++;
    p1.print();
    ++p1;
    p1.print();    

}