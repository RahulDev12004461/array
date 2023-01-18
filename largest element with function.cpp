//array with largest element and smallest element
#include<iostream>
using namespace std;
int getmax(int num[],int n){
	int largest=INT_MIN;
		for(int i=0;i<=n-1;i++)
	{
		cin>>num[i];
	}
	
	for(int i=0;i<=n-1;i++)
	{
		if(largest<=num[i])
		{
			largest=num[i];
		}
	}
	
	return largest;
}
main()
{
	int n;
	int num[100];
	cin>>n;
	cout<<"the largest element will be "<<getmax(num,n);
}
