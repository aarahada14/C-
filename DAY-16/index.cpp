#include<iostream>
using namespace std;

int main(){

int num = 100;

int &ref = num;
int num2 = num;

ref = 500;
num2 = 300;

cout << "ref:" << ref <<" " <<"num:" << num << endl;
cout << "num2:" << num2 <<" " <<"num:" << num << endl;

    return 0;
}