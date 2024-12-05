#include<iostream>

using namespace std;


int rec(int num){

    if(num <=1){
        return 1;
    }
    return num*rec(num-1); 

}


int main(){

    int num = 4;
    cout << rec(num);

    return 0;
}