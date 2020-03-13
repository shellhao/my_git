// 声明一个vehicle基类，由此派生出bicycle类，motorcar类，从motorcar类和bicycle类派生出motorcycle类

#include<iostream>
using namespace std;

class vehicle
{
private:
    /* data */
public:
    int maxspeed;
    int weight;
    vehicle(){};
    vehicle(int weight, int maxspeed);
    ~vehicle();
    void run(){
        cout<<"vehicle run"<<endl;
    }
    void stop(){
        cout<<"vehicle stop"<<endl;
    }
};

vehicle::vehicle(int weight, int maxspeed):weight(weight),maxspeed(maxspeed)
{
    cout<<"vehicle constractor called"<<endl;
}

vehicle::~vehicle()
{
    cout<<"vehicle destractor called"<<endl;
}
class motorcar:virtual public vehicle{
    private:

    public:
        int SeatNum;
        motorcar(int SeatNum,int maxspeed, int weight):SeatNum(SeatNum),vehicle(weight,maxspeed){
            cout<<"motorcar constractor called"<<endl;
        };
        ~motorcar(){
            cout<<"motorcar destractor called"<<endl;
        }
};

class bicycle:virtual public vehicle
{
private:
    /* data */
public:
    int height;
    bicycle(int height, int maxspeed, int weight):height(height),vehicle(weight,maxspeed){
        cout<<"bicycle constractor called"<<endl;
    };
    ~bicycle(){
        cout<<"bicycle destractor called"<<endl;
    };
};


class motorcycle:public bicycle, public motorcar{
    private:
    public:
        motorcycle(int height, int seatnum, int weight, int maxspeed):bicycle(height, maxspeed, weight),motorcar(seatnum,maxspeed,weight){
            cout<<"motorcycle constractor called"<<endl;
        };
        ~motorcycle(){
            cout<<"motorcycle destractor called"<<endl;
        }
};

int main(){
    
    int height = 2;
    int seatnum = 2;
    int weight = 200;
    int maxspeed = 200;
    motorcycle m(height,seatnum,weight,maxspeed);
    m.motorcar::maxspeed = 150;
    cout<<m.bicycle::maxspeed<<endl;
    cout<<m.motorcar::maxspeed<<endl;
}
