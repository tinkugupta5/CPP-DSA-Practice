#include <iostream>
using namespace std;

//HOLD

void printArray(int arr[],int size) {

    cout<<"printing the array"<<endl;
    for(int i=0; i<size;i++){
        cout << arr[i] << "";
    }

    cout<<"printing the array"<<endl;

}

int main()
{
	
	cout << "Value at 14 index"<< endl;

    int second[3] = {5,7,11};
    cout<<"Value at 2 index " << second[1] << endl;

    int third[15] = {2,7};
    cout<<"printing the array"<<endl;

    int n=15;
    int number[30];
    printArray(number,30);
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<third[i]<<"";
    // }

//initialising alllocation with zero
    int fourth[10] = {0};
    n = 10;
    cout<<"printing the array" <<endl;
    for (int i = 0; i < n; i++)
    {   
        /* code */
        
        cout<<fourth[i]<<"";
    }

    int fourthsize = sizeof(fourth)/sizeof(int);
    cout << "Size of fifth is" << fourthsize <<endl;

    cout << endl <<"Everything is Fine"<<endl <<endl;


    //  different array question 

    char ch[5] = { 'a','b'};
    cout << ch[1] << " this is the example of charecter" << endl;
    cout << endl <<"Everything is Fine"<<endl <<endl;


	return 0;
}
