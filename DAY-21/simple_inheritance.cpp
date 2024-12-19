#include<iostream>
using namespace std;


class animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }

};


class cat : public animal{
    public:
    void meow(){
        cout << "Meowing..." << endl;
    }
};




int main(){

    cat c1;
    c1.eat();
    c1.meow();


    return 0;
}