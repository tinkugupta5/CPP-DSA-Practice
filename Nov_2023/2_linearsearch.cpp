#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
  
    int arr[5]={2,4,7,8,9};
    cout<<"enter the elemnt to search for"<<endl;
    int key ;
    cin>>key;
    bool found = search(arr,5,key);
    if(found)
    {
        cout<< key <<"elemnt is present in the array";
    }else
    {
        cout<< key <<"elemnt is not  present in the array";
    }
}