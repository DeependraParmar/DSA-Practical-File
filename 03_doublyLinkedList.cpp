#include <iostream>
using namespace std;
struct Node{
    Node* prev;
    int info;
    Node* next;
};
Node* newnode,*startnode = NULL,*endnode = NULL,*temp;
int n = 0;

void getnode(){
    newnode = new Node;
    cout<<"Enter info here: ";
    cin>>newnode->info;
    newnode->prev = NULL;
    newnode->next = NULL;
}

void insertAtFirst(){
    if(startnode==NULL){
        startnode = newnode;
        endnode = newnode;
        n++;
    }
    else{
        newnode->next = startnode;
        startnode->prev = newnode;
        startnode = newnode;
        n++;
    }
}
void insertAtLast(){
    endnode->next = newnode;
    newnode->prev = endnode;
    endnode = newnode;
    n++;
}
void insertAtPosition(){
    int pos;
    cout<<"Enter the position for insertion: ";
    cin>>pos;

    if(pos==1)
        insertAtFirst();
    else if(pos==n+1)
        insertAtLast();
    else if(pos<1 && pos>n+1)
        cout<<"Invalid Choice..."<<endl;
    else{
        temp = startnode;
        int i=1;

        while(i<=pos-2){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
        n++;
    }
}
void deleteFromFirst(){
    if(startnode==NULL){
        cout<<"Underflow"<<endl;
    }
    else if(startnode==endnode){
        startnode = NULL;
        endnode = NULL;
        n--;
    }
    else{
        startnode = startnode->next;
        startnode->prev = NULL;
        n--;
    }
}
void deleteFromLast(){
    temp = startnode;
    while(temp->next != endnode){
        temp = temp->next;
    }
    temp->next = NULL;
    endnode = temp;
    n--;
}
void deleteFromPosition(){
    int pos;
    cout<<"Enter the position for insertion: ";
    cin>>pos;

    if(pos==1)
        deleteFromFirst();
    else if(pos==n)
        deleteFromLast();
    else if(pos<1 && pos>n+1)
        cout<<"Invalid Choice..."<<endl;
    else{
        temp = startnode;
        int i=1;
        while(i<pos){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        n--;
    }
}
void traverse(){
    temp = startnode;
    while(temp != NULL){
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    int ch,ch1,ch2,ch3;
    do
    {
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Traverse" << endl<< endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            getnode();
                cout << "1. Insertion at first position" << endl;
                cout << "2. Insertion at last position" << endl;
                cout << "3. Insertion at any position" << endl;

                cout << "Enter your choice: ";
                cin >> ch1;

                if (ch1 == 1){
                    insertAtFirst();
                    traverse();
                }
                else if (ch1 == 2){
                    insertAtLast();
                    traverse();
                }
                else if (ch1 == 3){
                    insertAtPosition();
                    traverse();
                }
                else{
                    cout << "Invalid choice..." << endl;
                    break;
                }
                break;
        }
        case 2:
        {
            cout << "Deleting nodes..." << endl << endl;
            if (startnode == NULL)
            {
                cout << "List is empty...Nodes cannot be deleted" << endl;
            }

            else
            {
                cout << "1. Delete from first position" << endl;
                cout << "2. Delete from last position" << endl;
                cout << "3. Delete from particular position" << endl<< endl;

                cout << "Enter your choice: ";
                cin >> ch2;

                if (ch2 == 1){
                    deleteFromFirst();
                    traverse();
                }
                else if (ch2 == 2){
                    deleteFromLast();
                    traverse();
                }
                else if (ch2 == 3){
                    deleteFromPosition();
                    traverse();
                }
                else
                {
                    cout << "Invalid choice...." << endl;
                    break;
                }

            }
                break;
        }
        case 3:
            traverse();
            break;

        default:
            cout << "Invalid choice..." << endl;

        }
        cout << "Press 1 to continue: ";
        cin >> ch3;
        
    } while (ch3 == 1);

    cout<<endl;
    cout << endl<< endl<< "Thank You for your valuable time!!" << endl;
    return 0;
}