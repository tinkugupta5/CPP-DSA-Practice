#include<iostream>
using namespace std;
#include <climits>

int getMax(int num[],int n) {
    int max = INT_MIN;
    for(int i = 0; i<n; i++) {
        if(num[i]>max)
        {
            max = num[i];
        }
    }

    return max;
}

int getMin (int num[],int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(num[i] > min)
        {
            min=num[i];
        }
    }
}

int main() {

    int size;
    cin >> size;
    int num[100];
    //taking input in array
    for ( int i = 0; i<size; i++)
    {    
        cin>>num[i];
        
        /* code */
    }

    cout << " Maximum value is"<< getMax(num,size)<<endl;
    cout << " Minmum value is"<< getMin(num,size)<<endl;
    


    
    return 0;

}