#include <iostream>
using namespace std;
//function to fill the empty array with elements
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
// function to print the given input array 
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// function for linear search 
void linearSearch(int arr[],int n){
    int item;
    cout<<"Enter the element to search in the given array: ";
    cin>>item;
    int flag = 0;
    int i=0;
    for(i; i<n; i++){
        if(arr[i]==item){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found at index: "<<i<<endl;
    }
    else{
        cout<<"Sorry!! Element not found"<<endl;
    }
}
int main(){
    int n = 6;
    int arr[6];
    fillArray(arr,n);
    cout<<endl;
    cout<<"The given input array looks like..."<<endl;
    displayArray(arr,n);
    cout<<endl;
    linearSearch(arr,n);
    cout<<endl;

    return 0;
}