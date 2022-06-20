#include <iostream>

using namespace std;

void inputArray(int arr[], int n){
    
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void sortArray(int arr[], int n){
    
    int i=1;
    for(; i<n; i++){
        
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
                swapped = true;
        }
        if(swapped == false){
            break;
        }
    }
    
}

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        //printing the array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    
    //array declaration
    int arr[100];
    
    //taking input: array size
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    
    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);
    
    

    return 0;
}
