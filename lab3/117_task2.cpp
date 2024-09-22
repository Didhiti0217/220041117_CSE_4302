#include<iostream>
using namespace std;

class Temperature{
private:
    float value;
    char unit;
public:
    void assign(float value, char unit){
            if(value<-273.15){
                cout << "Value less than absolute zero temperature" << endl;
            }
            else if(unit!='C' && unit!='F' && unit!='K'){
                cout << "Unit not valid" << endl;
            }
            else{
                this->value = value;
                this->unit = unit;
            }
    }
    float convert(char unit){
        float temp;
        if(unit=='F' && this->unit=='C'){
            temp=((value*9)/5)+32;
        }
        if(unit=='K' && this->unit=='C'){
            temp=value+273.15;
        }
        if(unit=='C' && this->unit=='F'){
            temp=((value*9)/5)+32;
        }
        if(unit=='C' && this->unit=='K'){
            temp=value-273.15;
        }
        if(unit=='K' && this->unit=='F'){
            temp = (((value-32)*5)/9) + 273.15;
        }
        if(unit=='F' && this->unit=='K'){
            temp = (((value-273.15)*9)/5) + 32;
        }
        return temp;
    }
    void print(){
        if(unit=='C'){
            cout<<"The temperature is "<<value<<" Celsius."<<endl;
        }
        if(unit=='F'){
            cout<<"The temperature is "<<value<<" Fahrenheit."<<endl;
        }
        if(unit=='K'){
            cout<<"The temperature is "<<value<<" Kelvin."<<endl;
        }
    }

};

int main(){
    Temperature t;
    t.assign(271.15,'F');
    cout<<t.convert('K')<<endl;
    t.print();
}
