//array with function
#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	cout<<"printing the array "<<endl;
	for(int i=0;i<=size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"printing done "<<endl;
}
main()
{
	int fourth[4]={12,33,23,44};
	printarray(fourth,4);
}
