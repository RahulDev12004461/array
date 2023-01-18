//print  sum of all elements using function
#include<iostream>
#include<iostream>
using namespace std;
int getmax(int num[],int n){
	int sum=0;
		for(int i=0;i<=n-1;i++)
	{
		cin>>num[i];
	}
	
	for(int i=0;i<=n-1;i++)
	{
		sum=sum+num[i];
		
	}
	
	return sum;
}
main()
{
	int n;
	cin>>n;
	int num[100];
	cout<<"the sum of all elements in array is "<<getmax(num,n);
}
