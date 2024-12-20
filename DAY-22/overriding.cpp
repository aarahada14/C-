#include<iostream>
using namespace std;



class Student{

    public:
    void aara(){
        cout << "Welcome to aara..." << endl;
    }
        
};

class Hitisha :public Student{
    public:
    void aara(){
        cout << "Welcome to hitisha..." << endl;
        Student::aara();
    }
};


int main(){

Hitisha h1;
h1.aara();


    return 0;
}