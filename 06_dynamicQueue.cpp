#include <iostream>
using namespace std;
struct Queue{
    int info;
    Queue* nextnode;
};

Queue *newnode, *front = NULL, *rear = NULL, *temp;
int cnt = 0,ch,ch1;

void getnode(){
    newnode = new Queue;
    cout<<"Enter element: ";
    cin>>newnode->info;
    newnode->nextnode = NULL;
}
void enqueue(){
    if(front == NULL){
        cout<<"Queue is empty...Creating the first node of the Queue"<<endl;
        front = newnode;
        rear = newnode;
        cnt++;
    }
    else if(newnode == NULL){
        cout<<"Overflow"<<endl;
    }
    else{
        rear->nextnode = newnode;
        rear = newnode;
        cnt++;
    }
}
void dequeue(){
    if(rear == NULL){
        cout<<"Underflow"<<endl;
    }
    else if(front == rear){
        front = NULL;
        rear = NULL;
    }
    else{
        front = front->nextnode;
        cnt--;
    }
}
void traverse(){
    if(front == NULL){
        cout<<"Empty Queue"<<endl;
    }
    else{
        temp = front;
        while(temp != NULL){
            cout<<temp->info<<" ";
            temp = temp->nextnode;
        }
    }
    cout<<endl<<endl;
}
int main(){

    do{
        cout<<"*****Operations on Queue*****"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Traverse"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                cout<<"Adding a new node..."<<endl;
                getnode();
                enqueue();
                traverse();
                break;
            }
            case 2:{
                cout<<"Deleting a node..."<<endl;
                dequeue();
                traverse();
                break;
            }
            case 3: {
                cout<<"Priting the Queue..."<<endl;
                traverse();
                break;
            }
            default:{
                cout<<"Invalid Choice"<<endl;
                break;
            }
        }
        cout<<"Press 1 to continue: ";
        cin>>ch1;
    }while(ch1==1);


    return 0;
}