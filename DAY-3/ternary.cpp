#include<iostream>
using namespace std;
int main (){

    int a =20, b=10, c=25;
    
    int num 
        =(a > b)? ((a > c)? a : c ) : ((b > c) ? b : c);

    cout<< "largtest numberb is" << num << endl;
    return 0;
    

}