#include<iostream>
using namespace std;

int findUnique(int arr[],int size)
{
    int ans = 0;
    for ( int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    cout << "The unique value in the array is "<<ans << endl;
    return ans;
}


int main()
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    findUnique(arr,7);
}