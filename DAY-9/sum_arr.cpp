#include<iostream>
using namespace std;

int main(){
   
//    int a[5]={1, 2, 3, 4, 5};
//    int b[5]={1, 2, 3, 4, 5};
   
//    int c[5];

//    for(int i=0; i<5; i++){
//         c[i]=a[i]+b[i];
//         cout<<c[i] <<" ";
//    }


   int size;
    cout << "size: ";
    cin >> size;

 int a[size];
 int b[size];

 for(int i=0; i<size; i++){
    cout << "a[" <<i<<"]:";
    cin >> a[i];
 }
 cout << endl;

 for(int i=0; i<size; i++){
    cout << "b[" <<i<<"]:";
    cin >> b[i];
 }

 int c[size];

 for(int i=0; i<size;i++){
    c[i] = a[i] + b[i]; // i =0
 }

 for(int j=0; j<size; j++){
    cout << c[j] << " ";
 }





    return 0;
}