#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr{1, 4, 2, 3, 5};

    int choice;
    do{
        cout<<"enter your choice" <<endl;
        cout<<"press 1 for size method" <<endl;
        cout<<"press 2 for push method" <<endl;
        cout<<"press 3 for pop method" <<endl;

        cout<<"entert your choice:" <<endl;
        cin>>choice;

        switch(choice){
            case 1:

            cout <<arr.size()<<endl;
            
            break;

            case 2:
            arr.push_back(10);
            cout <<arr.size();
            cout<<endl;
            

            break;

            case 3:
            arr.pop_back();
            cout <<arr.size();
            cout<<endl;

            break;
        }
    }

    while(choice!=0);

    return 0;
}