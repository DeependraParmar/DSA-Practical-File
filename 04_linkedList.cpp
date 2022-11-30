#include <iostream>
using namespace std;
struct node
{
    int info;
    node* nextnode;
};

node* newnode;
node* startnode = NULL;
node* endnode;
node* temp;
int cnt = 0,ch, ch1, ch2, ch3;

void emptylist()
{
    startnode = newnode;
    endnode = newnode;
    cnt++;
}
void getnode()
{
    newnode = new node;
    cout << "Enter the element for node: ";
    cin >> newnode->info;
    newnode->nextnode = NULL;
}
void display()
{
    if (startnode == NULL){
        cout << "Empty list" << endl;
    }
    else
    {
        temp = startnode;
        while (temp != NULL)
        {
            cout << temp->info << " ";
            temp = temp->nextnode;
        }
        cout<<endl<<endl;
    }
}
void insertAtFirst()
{
    newnode->nextnode = startnode;
    startnode = newnode;
    cnt++;
}
void insertAtLast()
{
    cout << "Adding node at last" << endl;
    endnode->nextnode = newnode;
    endnode = newnode;
    cnt++;
}
void insertAtPos()
{
    int pos;
    cout << "Enter the position to insert new node: ";
    cin >> pos;

    if (pos == 1){
        insertAtFirst();
    }
    else if (pos == (cnt + 1)){
        insertAtLast();
    }
    else if (pos > 1 && pos <= cnt)
    {
        temp = startnode;
        int i = 1;
        while (i <= pos - 2)
        {
            temp = temp->nextnode;
        }
        newnode->nextnode = temp->nextnode;
        temp->nextnode = newnode;
        cnt++;
        display();
    }
    else
    {
        cout << "Invalid position entered..." << endl;
    }
}
void deleteFromFirst()
{
    startnode = startnode->nextnode;
    cnt--;
}
void deleteFromLast()
{
    cout << "Deleting last node...." << endl;
    cnt--;
    if (cnt == 0)
    {
        startnode = NULL;
        endnode = NULL;
    }
    else
    {
        temp = startnode;
        while (temp->nextnode != endnode)
        {
            temp = temp->nextnode;
        }
    }
    temp->nextnode = NULL;
    endnode = temp;
}
void deleteFromPos()
{
    int pos;
    cout << "Enter the position to delete node: ";
    cin >> pos;

    if (pos == 1)
        deleteFromFirst();
    else if (pos >= 1 && pos <= cnt)
    {
        cnt--;
        temp = startnode;
        int i = 1;
        while (i <= pos - 2)
        {
            temp = temp->nextnode;
        }
        temp->nextnode = temp->nextnode->nextnode;

        if (cnt == 1)
            endnode = startnode;
    }
    else if (pos < 1 || pos > cnt)
    {
        cout << "Invalid position entered..." << endl;
    }
}
int main()
{
    cout << "**********Operations on List**********" << endl << endl;

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

            if (startnode == NULL)
            {
                emptylist();
                display();
            }
            else
            {
                cout << "1. Insertion at first position" << endl;
                cout << "2. Insertion at last position" << endl;
                cout << "3. Insertion at any position" << endl;

                cout << "Enter your choice: ";
                cin >> ch1;

                if (ch1 == 1){
                    insertAtFirst();
                    display();
                }
                else if (ch1 == 2){
                    insertAtLast();
                    display();
                }
                else if (ch1 == 3){
                    insertAtPos();
                    display();
                }
                else{
                    cout << "Invalid choice..." << endl;
                    break;
                }

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
                    display();
                }
                else if (ch2 == 2){
                    deleteFromLast();
                    display();
                }
                else if (ch2 == 3){
                    deleteFromPos();
                    display();
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
            display();
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