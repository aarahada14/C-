#include<iostream>
using namespace std;

template <typename T>

T sum (T x, T y){
    
    return x + y;
}

int main(){

cout << sum<int>(3,7) <<endl;
cout << sum<float>(3.0,4.6) <<endl;

    return 0;
}