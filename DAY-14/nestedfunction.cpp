#include<iostream>
using namespace std;

string fun2();

string fun1(){
     
     cout << "fun1 is function1" <<endl;
     fun2();
}


string fun2(){
     
     cout << "fun1 is function2" <<endl;
}


int main (){
    
    fun1();
    


    return 0;
}