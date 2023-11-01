#include<iostream>
using namespace std;

int ArraySum(int arr[],int n)
{
    int sum =0 ;
    for(int i=0; i<n; i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}



int main()
{
    int arr[100];
    int size ;

    cout<< "Enter the size of array"<<endl;
    cin>>size;

    cout << "Enter the element of array"<<endl;
    for (int i = 0; i < size; i++)
    {
           /* code */
           cin>>arr[i];
    }

    cout <<"Sum =" << ArraySum(arr,size);
}