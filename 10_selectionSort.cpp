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
void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if(min!=i)
            swap(arr[min],arr[i]);
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
    selectionSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}