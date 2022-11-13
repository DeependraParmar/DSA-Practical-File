#include <iostream>
#include <limits.h>
using namespace std;
void fillArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
void largestAndSecLargest(int arr[],int n){
    int largest = arr[0];
    int sec_largest = INT_MIN;

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest){
            sec_largest = arr[i];
        }
    }
    cout<<endl<<"Largest Number is: "<<largest<<endl;
    cout<<"Second Largest Number is: "<<sec_largest<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    // dynamically allocating memory for array 
    int *arr = new int[n];

    cout<<"Fill the array..."<<endl;
    fillArray(arr,n);
    largestAndSecLargest(arr,n);

    // deallocating the array memory 
    delete[] arr;

    return 0;
}