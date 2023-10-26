#include<iostream>
using namespace std;

void printArraySized(int arr[3],int n){

    cout << "Array as Sized Array Argument : ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << "";
        /* code */
    }
    
}

void printArrayUnSized(int arr[3],int n)
{
    cout << "Array as Unsized Array Argument: "; 
    for (int i = 0; i < n; i++) { 
        cout << *(arr + i) << " "; 
    } 
    cout << endl; 
}

int main()
{
    int arr[] = {10,20,30};
    printArraySized(arr,3);
    printArrayUnSized(arr,3);
    return 0;

}