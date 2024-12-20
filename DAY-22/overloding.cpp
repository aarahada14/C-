#include<iostream>
using namespace std;



class Vehicle{

    public:
    void mark(){
        cout << "car is make" <<endl;
    }
    void mark(int a){
        cout << "car is make"<< a <<endl;
    }
    void mark(int a, int b){
        cout << "car is make"<< a << "year" << b <<"month" <<endl;
    }
        
};


int main(){

Vehicle obj;
obj.mark();
obj.mark(10);
obj.mark(20, 30);

    return 0;
}