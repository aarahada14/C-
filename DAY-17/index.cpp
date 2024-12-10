#include<iostream>
#include<string.h>
using namespace std;

class Phone
{
    public:
    char company[100];
    char color[100];
    int price;
};


int main(){

    int size;
    cout << "No of p1: ";
    cin >> size;

    Phone p1[size];


    for(int i=0; i<size; i++){
            p1[i].company;
            p1[i].color;
            p1[i].price;
           
            cout << "p1["<< i <<"].company: ";
            cin >> p1[i].company;
            cout << "p1["<< i <<"].color: ";
            cin >> p1[i].color;
            cout << "p1["<< i <<"].price: ";
            cin >> p1[i].price;
            cout << endl;

    }
    cout << endl;

cout << " company " << " " << " color " << " " << " price " << " " << endl << endl;


for(int i=0; i<size; i++){
        cout << " " <<  p1[i].company << " " ;
        cout << " " <<  p1[i].color << " " ;
        cout << " " <<  p1[i].price <<  " " << endl;   
}

    return 0;
}