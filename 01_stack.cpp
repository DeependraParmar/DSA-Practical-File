#include <iostream>
using namespace std;

void push(int stk[],int item, int &top,int &n,int size){
    if(top==size-1){
        cout<<"Overflow..."<<endl;
    }
    else{
        stk[++top] = item;
        n++;
    }
}
void pop(int &top,int &n){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        top--;
        n--;
    }
}
void traverse(int stk[], int top){
    if(top==-1){
        cout<<"Empty Stack"<<endl;
    }
    else{
        for(int i=top; i>=0; i--){
            cout<<stk[i]<<" ";
        }
    }
}
int main(){
    int size,n=0;
    cout<<"Enter the size of the stack: ";
    cin>>size;

    int *stk = new int[n];
    int item;
    int top = -1;
    int choice,ch2;

    do{
    cout<<"1 : PUSH element in Stack..."<<endl;
    cout<<"2 : POP element from Stack..."<<endl;
    cout<<"3 : TRAVERSE Stack..."<<endl;
    cout<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter the item to insert: ";
            cin>>item;

            push(stk,item,top,n,size);
            traverse(stk,top);
            cout<<endl<<endl;
            break;

        case 2:
            pop(top,n);
            traverse(stk,top);
            cout<<endl<<endl;
            break;

        case 3:
            traverse(stk,top);
            cout<<endl<<endl;
            break;

        default:
            cout<<"Invalid Choice Given..."<<endl;

    }
    cout<<"Press 1 to continue: ";
    cin>>ch2;
    }while(ch2==1);

    delete[] stk;
    return 0;
}