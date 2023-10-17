#include <iostream>
using namespace std;

int main()
{
	int number[15];
	cout << "Value at 14 index" <<number[14] << endl;

    int second[3] = {5,7,11};
    cout<<"Value at 2 index " << second[1] << endl;

    int third[15] = {2,7};
    cout<<"printing the array"<<endl;

    int n=15;
    for(int i = 0; i<n; i++)
    {
        cout<<third[i]<<"";
    }

	return 0;
}
