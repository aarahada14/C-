#include<iostream>
using namespace std;

int memo(int n){
    if(n>=5){
        cout<< n << endl;
    }
    return(n+1);
}
    

int main (){

    memo(1);
    
    return 0;
}