//reverse of an array using function
#include<iostream>
using namespace std;
void reverse(int num[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(num[start],num[end]);
		
		
		
		end--;
		start++;
	}
	
}
void printarray(int arr[],int n)
{
	cout<<"printing the array "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"printing done "<<endl;
}
main()
{
	
	int num[5]={1,2,3,33,44};
	reverse(num,5);

}
