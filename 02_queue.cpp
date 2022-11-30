#include <iostream>
using namespace std;
void enqueue(int q[],int &rear, int &n, int item,int size){
    if(rear == size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        q[++rear] = item;
        n++;
    }
}
void dequeue(int &front,int &rear, int &n){
    if(front==rear){
        cout<<"Empty Queue"<<endl;
    }
    else{
        ++front;
        n--;
    }
}
void traverse(int q[],int front,int rear){
        for(int i=front+1; i<=rear; i++){
            cout<<q[i]<<" ";
        }
}
int main(){
    int size,front = -1, rear = -1, n=0;
    cout<<"Enter the size of the queue: ";
    cin>>size;
    int *q = new int[size];

    int choice,choice1;
    do{
        cout<<"1. Enqueue in Queue"<<endl;
        cout<<"2. Dequeue from Queue"<<endl;
        cout<<"3. Traverse"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: {
                int item;
                cout<<"Enter element to insert: ";
                cin>>item;
                enqueue(q,rear,n,item,size);
                traverse(q,front,rear);
                cout<<endl;
                break;
            }
            case 2: {
                dequeue(front,rear,n);
                traverse(q,front,rear);
                cout<<endl;
                break;
            }
            case 3: {
                traverse(q,front,rear);
                cout<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice..."<<endl;
                break;
            }
        }

        cout<<endl<<endl<<"Press 1 to continue: ";
        cin>>choice1;
    }while(choice1==1);

    delete[] q;
    return 0;
}