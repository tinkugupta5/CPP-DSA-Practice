#include<iostream>
using namespace std;

// print array 
int printTriverse(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << endl;
    }
}

// calculate sum 

int printSum(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
       sum = sum+arr[i];
    }
}

// print key which found in the array or not 

bool printLinearSearch(int arr[] , int size , int key )
{
    for(int i = 0 ; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
        
        return 0;
    }
}



int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3 ;
    printTriverse(arr,n);
    printSum(arr,n);
    bool found =  printLinearSearch(arr,n,key);
    if(found)
    {
        cout<< key <<"elemnt is present in the array";
    }else
    {
        cout<< key <<"elemnt is not  present in the array" << endl;
    }
    cout<<"sum is "<<printSum(arr,n)<<endl;
    return 0;

}