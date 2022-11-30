#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-i-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<endl<<"Fill the elements in the array....."<<endl;
    fillArray(arr,n);

    cout<<endl<<"Unsorted array looks like: ";
    displayArray(arr,n);

    cout<<endl<<endl<<"Sorted array is: ";
    bubbleSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}