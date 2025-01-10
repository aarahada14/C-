#include<iostream>
using namespace std;

class Queue{

    private:
        int *arr;
        int cap;
        int front;
        int rear;
        int size;

    public:

    Queue(int cap){
    
        this->cap = cap;
        this->arr = new int(cap);
        this->size = 0;
        this->front = -1;
        this->rear = -1;
}



void Enqueue(int ele){
    if(this->front == -1 && this->rear == -1){

            this->front=0;
            this->rear=0;
            this->arr[this->rear] = ele;
            size++;
    }
    else if(size == this-> cap){
        cout << "Queue is Overflow...!" << endl;
    }
    else{
        this->rear++;
        this->arr[this->rear] = ele;
        size++;
    }

}



void Denqueue(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty...!" << endl;
    }

    else if(this->front == this->rear){
            this->front=-1;
            this->rear=-1;
            size--;
    }
    else{
            this->front++;
            size--;
    }

}

void Front(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty...!" << endl;
    }
    else{
        cout << this->arr[this->front]<<endl ;
    }

}

void Rear(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty...!" << endl;
    }
    else{
        cout << this->arr[this->rear]<<endl ;
    }
}

void Full(){
    if(size == this->cap){
        cout << "Queue is Full...!" << endl;
    }
    else{
       cout << "Queue is not empty...!" << endl;
    }
}

void Empty(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty...!" << endl;
    }
    else{
       cout << "Queue is not empty...!" << endl;
    }
}

void Size(){
    cout << "size:"<<size << endl;
}

void Display(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is underflow...!" << endl;
    }
    else{
        for(int i=this->front; i<=this->rear; i++){
            cout << this->arr[i] << endl;
        }
        
    }
}   

};



int main (){

    int cap;
    cout << "capasity:";
    cin >> cap;

    Queue Queue(cap);

    
int choice, ele;

do{
    cout << " press 1 for Enqueue" << endl;
    cout << " press 2 for Denqueue" << endl;
    cout << " press 3 for Front" << endl;
    cout << " press 4 for is Rear" << endl;
    cout << " press 5 for is Full" << endl;
    cout << " press 6 for is Empty" << endl;
    cout << " press 7 for Size" << endl;
    cout << " press 8 for Display" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
            cout << "ele: ";
            cin >> ele;
            Queue.Enqueue(ele);
        break;
    
    case 2:
            Queue.Denqueue();
        break;
    
    case 3:
            Queue.Front();
        break;
    
    case 4:
            Queue.Rear();
        break;
    
    case 5:
            Queue.Full();
        break;
    
    case 6:
            Queue.Empty();
        break;

    case 7:
            Queue.Size();;
        break;

    case 8:
            Queue.Display();
        break;

    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}while(choice != 0);

    return 0;
}