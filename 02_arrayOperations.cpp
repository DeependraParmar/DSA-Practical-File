#include <iostream>
using namespace std;
// function to fill the array 
void fillArray(int arr[],int size, int &n){
    cout<<"Size of the array is: "<<size<<endl;
    cout<<"Enter the number of elements to fill: ";
    cin>>n;

    if(n>size){
        cout<<"Elements excedding size..."<<endl;
        fillArray(arr,size,n);
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i<<": ";
            cin>>arr[i];
        }  
    }
}
// function to display the array 
void displayArray(int arr[],int &n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// function to insert the element at the first position 
void insertAtFirst(int arr[],int size, int &n){

    if(n==size){
        cout<<endl<<"Overflow (Elements = Size of Array)"<<endl;
    }
    else{
        int item;
        cout<<endl<<"Enter the element to insert at first position: ";
        cin>>item;
        for(int i=n-1; i>=0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = item;
        n++;
        cout<<"After insertion of element at first position, the array looks like...."<<endl;
    }
}
// function to insert the element at last position 
void insertAtLast(int arr[],int size,int &n){

    if(n==size){
        cout<<endl<<"Overflow (Elements = Size of Array)"<<endl;
    }
    else{
        int item;
        cout<<endl<<"Enter the element to insert at last position: ";
        cin>>item;
        arr[n] = item;
        n++; 
        cout<<"After insertion of element at last position, the array looks like...."<<endl;
    }
}
// function to insert the element at the given position 
void insertAtPosition(int arr[],int size,int &n){
    if(n==size){
        cout<<"Overflow (Elements = Size)"<<endl;
    }
    else{
        int pos;
        cout<<endl<<"Enter the position at which element is to be inserted: ";
        cin>>pos;
        int item;
        cout<<"Enter the item to insert at given index: ";
        cin>>item;

        if(pos>=0 && pos<=n){

            for(int i=n-1; i>=pos; i--){
                arr[i+1] = arr[i];
            }
            arr[pos] = item;
            n++;

            cout<<endl<<"After insertion of element at given position, array looks like...."<<endl;
        }
        else{
            cout<<"Invalid Position Given..."<<endl;
        }
    }
}
// function to delete the element of first position
void deleteFirstElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No element present to delete"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            arr[i] = arr[i+1];
        }
        n--;
        cout<<endl;
        cout<<"After deletion of first element, the array looks like..."<<endl;
    }
}
// function to delete the last element of the array 
void deleteLastElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No elements present to delete"<<endl;
    }
    else{
        n--;
        cout<<endl;
        cout<<"After deletion of the last element, the array looks like..."<<endl;
    }
}
void deleteGivenElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No elements present to delete"<<endl;
    }
    else{
        int index;
        cout<<endl<<"Enter the index of the element to delete: ";
        cin>>index;
        
        if(index>=0 && index<=n){
            for(int i=index; i<n; i++){
                arr[i] = arr[i+1];
            }
            n--;
            cout<<"After deletion of element of given index, the array looks like...."<<endl;
        }
        else{
            cout<<"Invalid Index Given"<<endl;
        }
    }
}
int main(){
    // Here we are going to insert values or elements in the array and they can be inserted in various manners that is 1. At first position 2. At last position 3. At given position 
    int size,n=0;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int *arr = new int[size];

    cout<<endl;
    fillArray(arr,size,n);

    cout<<endl;
    cout<<"The array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl;

    int choice,choice1,choice2;
    

    do{
        cout<<"1. Insertion in Array"<<endl;
        cout<<"2. Deletion from Array"<<endl;
        cout<<"3. Traversal"<<endl<<endl;
    
        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:{
                cout<<"1. Insertion at first position"<<endl;
                cout<<"2. Insertion at last position"<<endl;
                cout<<"3. Insertion at particular position"<<endl<<endl;

                cout<<"Enter your choice: ";
                cin>>choice1;

                if(choice1 == 1){
                    insertAtFirst(arr,size,n);
                    displayArray(arr,n);
                }
                else if(choice1 == 2){
                    insertAtLast(arr,size,n);
                    displayArray(arr,n);
                }
                else if(choice1 == 3){
                    insertAtPosition(arr,size,n);
                    displayArray(arr,n);
                }
                else{
                    cout<<"Invalid choice input..."<<endl;
                }
                break;
            }
            case 2: {
                cout<<"1. Deletion from first position"<<endl;
                cout<<"2. Deletion from last position"<<endl;
                cout<<"3. Delete from particular position"<<endl<<endl;

                cout<<"Enter your choice: ";
                cin>>choice1;

                if(choice1 == 1){
                    deleteFirstElement(arr,size,n);
                    displayArray(arr,n);
                }
                else if(choice1 == 2){
                    deleteLastElement(arr,size,n);
                    displayArray(arr,n);
                }
                else if(choice1 == 3){
                    deleteGivenElement(arr,size,n);
                    displayArray(arr,n);
                }
                else{
                    cout<<"Invalid choice input..."<<endl;
                }
                break;
            }
            case 3: {
                displayArray(arr,n);
                break;
            }
            default:
                cout<<"Invalid choice input..."<<endl;
                break;
        }
        cout<<endl<<endl<<"Press 1 to continue: ";
        cin>>choice2;
        cout<<endl;
    }while(choice2==1);

    cout<<"Thank you for your valuable time..."<<endl;
    delete[] arr;
    return 0;
}