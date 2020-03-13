// 声明一个vehicle类，有run，stop等函数，由此派生出自行车（bicyc）和motorcar类，从bicycle和motorcar派生出motorcycle
#include<iostream>
using namespace std;

class vehicle{
private:
    double maxspeed;
    double weight;
public:
    vehicle(double speed, double weight):maxspeed(speed),weight(weight){

    }
    ~vehicle(){}
    virtual void run(){
        cout<<"vehicle run"<<endl;
    }
    virtual void stop(){
        cout<<"vehicle stop"<<endl;
    }
};

class bicycle:virtual public vehicle{
private:
    double height;
public:
    bicycle(double speed, double weight, double height):vehicle(speed,weight),height(height){}
    ~bicycle(){}
    void run(){
        cout<<"bicycle run"<<endl;
    }
    void stop(){
        cout<<"bicycle stop"<<endl;
    }
};

class motorcar:virtual public vehicle{
private:
    int seatnum;
public:
    motorcar(double speed, double weight, int seatnum):vehicle(speed,weight),seatnum(seatnum){}
    ~motorcar(){}
    void run(){
        cout<<"motorcar run"<<endl;
    }
    void stop(){
        cout<<"motorcar stop"<<endl;
    }
};

class motorcycle:public motorcar, public bicycle{
public:
    motorcycle(double weight, double speed, int seatnum, double heigh):vehicle(speed,weight),motorcar(speed,weight,seatnum),bicycle(speed,weight,heigh){

    }
    ~motorcycle(){}
    void run(){
        cout<<"motorcycle run"<<endl;
    }
    void stop(){
        cout<<"motorcycle stop"<<endl;
    }
};

int main(){
    vehicle v(1,1);
    motorcar m(1,1,1);
    bicycle b(1,1,1);
    motorcycle mc(1,1,1,1);
    v.run();
    v.stop();
    m.run();
    m.stop();
    b.run();
    b.stop();
    mc.run();
    mc.stop();
    vehicle *vp = &v;
    vp->run();
    vp->stop();
    vp = &m;
    vp->run();
    vp->stop();
    vp = &b;
    vp->run();
    vp->stop();
    vp = &mc;
    vp->run();
    vp->stop();
    return 0;

}