#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};

int main(){
    Node *obj = new Node();
        obj->data = 20;
        obj->next = NULL;

    Node *obj2 = new Node(); 
        obj2->data = 99;
        obj2->next = NULL;
        obj->next = obj2;

    Node *obj3 = new Node();
        obj3->data = 99;
        obj3->next = NULL;
        obj2->next = obj3;


    cout << "HEAD:" << obj->data << " address: " << obj->next <<  endl;
    cout << "HEAD:" << obj2->data << " address: " << obj2->next <<  endl;
    cout << "HEAD:" << obj3->data << " address: " << obj3->next <<  endl;




    return 0;
}