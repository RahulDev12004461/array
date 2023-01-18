//element present in these array or not
#include<iostream>
using namespace std;
bool search(int num[],int n,int index)
{
	int sum=0;
		
	for(int i=0;i<=n-1;i++)
	{
	if(index==num[i])
	{
		
	
		return 1;
	}

	}
	return 0;
	
	
}
main()
{
	int n,index;
	int num[100];	
	cout<<"enter the size of an array ";
	cin>>n;
	cout<<"enter the element ";
	cin>>index;
		for(int i=0;i<=n-1;i++)
	{
		cin>>num[i];
	}
	bool found=search(num,n,index);

	if(found)
	{
		cout<<"element found ";
	}
	else
	{
		cout<<"element not found";
	}
	
	
}
