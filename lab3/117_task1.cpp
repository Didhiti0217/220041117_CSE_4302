#include<iostream>
using namespace std;

class Counter{
private:
    int count;
    int increment_step;
public:
    Counter(){
        count = 0;
    }
    void setIncrementStep(int step){
        increment_step=step;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count+=increment_step;
    }
    void resetCount(){
        count=0;
    }

};

int main(){
    Counter c1;
    c1.setIncrementStep(5);
    c1.increment();
    c1.increment();
    c1.increment();
    c1.increment();
    cout<<c1.getCount()<<endl;
    c1.resetCount();
    cout<<c1.getCount()<<endl;
}
