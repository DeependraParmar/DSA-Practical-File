#include <iostream>
using namespace std;
struct stack
{
    int info;
    stack *nextnode;
};
stack *newnode, *bottom = NULL, *top = NULL, *temp;
int cnt = 0, ch, ch1;

void getnode()
{
    newnode = new stack;
    cout << "Enter info: ";
    cin >> newnode->info;
    newnode->nextnode = NULL;
}
void push()
{
    if (top == NULL){
        cout << "Stack is empty...Adding first node to stack" << endl;
        bottom = newnode;
        top = newnode;
        cnt++;
    }
    else
    {
        top->nextnode = newnode;
        top = newnode;
        cnt++;
    }
}
void pop(){
    if(top == NULL){
        cout<<"Underflow"<<endl;
    }
    else if(top==bottom){
        bottom = NULL;
        top = NULL;
    }
    else{
        temp = bottom;
        while(temp->nextnode!=top){
            temp= temp->nextnode;
        }
        temp->nextnode = NULL;
        top = temp;
        cnt--;
    }
}
void traverse(){
    temp = bottom;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp = temp->nextnode;
    }
    cout<<endl<<endl;
}
int main()
{

    do
    {
        cout << ".......Operations on Stack......." << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Traverse" << endl;

        cout << endl<< "Enter your choice: ";
        cin >> ch;

        switch(ch){
            case 1: {
                cout<<"Creating a new node..."<<endl;
                getnode();
                push();
                traverse();
                break;
            }
            case 2: {
                cout<<"Deleting node from Stack..."<<endl;
                pop();
                traverse();
                break;
            }
            case 3: {
                cout<<"Printing the list..."<<endl;
                traverse();
                break;
            }
            default:{
                cout<<"Invalid Choice..."<<endl;
                break;
            }
        }
        cout<<"Press 1 for more operations on Stack: "<<endl;
        cin>>ch1;
    }while(ch1==1);

    return 0;
}