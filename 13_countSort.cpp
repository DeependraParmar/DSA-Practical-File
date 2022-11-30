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
int max(int arr[],int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
void countSort(int arr[],int n){
    int maxElement = max(arr,n);
    int *count{new int[maxElement+1]{0}};

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1; i<=maxElement; i++){
        count[i]+=count[i-1];
    }

    int *output = new int[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

    delete[] count,output;
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
    countSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}