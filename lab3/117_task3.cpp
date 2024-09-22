#include<iostream>
using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(){
        hour = 0;
        minute = 0;
        second = 0;
    }
    int hours(){
        return hour;
    }
    int minutes(){
        return minute;
    }
    int seconds(){
        return second;
    }
    void reset(int h,int m, int s){
        hour=h;
        if(h==24){
            hour=0;
        }
        minute=m;
        second=s;
    }
    void advance(int h,int m, int s){
        second+=s;
        if(second>=60){
            second-=60;
            minute++;
        }
        minute+=m;
        if(minute>=60){
            minute-=60;
            hour++;
        }
        hour+=h;
        if(hour>=24){
            hour-=24;
        }
    }
    void print(){
        cout<<"The current time is "<<hour<<" hours, "<<minute<<" minutes, "<<second<<" seconds"<<endl;
    }

};
int main(){
    Time t;
    cout<<t.hours()<<endl;
    cout<<t.minutes()<<endl;
    cout<<t.seconds()<<endl;
    t.reset(5,56,23);
    t.print();
    t.advance(25,6,7);
    t.print();
}
