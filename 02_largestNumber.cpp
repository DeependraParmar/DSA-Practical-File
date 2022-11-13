#include <iostream>
#include <limits.h>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
int greatestNumber(int arr[],int n){
    int greatest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > greatest){
            greatest = arr[i];
        }
    }
    return greatest;
}
int main(){
    int n;
    cout<<"Enter the number you want to enter: ";
    cin>> n;

    //dynamic memory allocation for array
    int *arr = new int[n];

    cout<<"Enter the elements...."<<endl;
    fillArray(arr,n);
    
    int result = greatestNumber(arr,n);
    cout<<"Greatest number is: "<<result<<endl;

    //deallocating array memory manually
    delete[] arr;
    return 0;
}