#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int>arr;
    vector <int>arr2(5, 11);
    vector <int>arr3{2, 4, 6, 8};
   


    cout << arr3[0] << endl;
    cout << arr3[1] << endl;
    cout << arr3[2] << endl;
    cout << arr3[3] << endl;

    arr3.push_back(14);
    cout << arr3[4]<<endl;

    arr3.pop_back();

    cout << arr.empty() << endl;
    cout << arr3.at(2) << endl;

    arr3.insert(arr3.begin()+1, 3);
        for(int i=0; i<arr3.size(); i++){
             cout << arr3[i] << endl;
    }

    cout<<"-------arry size------"<<endl;
    cout<<arr3.size()<<endl;

    return 0;
}