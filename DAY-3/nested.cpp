#include<iostream>
using namespace std;
int main(){


    int a=3;
    int b=4;
    int c=5;

    if(a>b){
        if(a>c){
            cout<< "a is greater";
        }
        else{
            cout<< "b is greater";
        }
    }
    else{
        if(b>c){
            cout<< "b is greater";
        }
        else{
            cout<<"c is greater";
        }
    }
    return 0;
}