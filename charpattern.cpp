
#include<iostream>
using namespace std;
int main()
{
	int n,z=1; 
	cout<<"Enter rows: ";
	cout<<"HELLOOOOOO   world";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*(n-i);j++)
		cout<<" ";
	for(int k=1;k<=2*i-1;k++,z++)
	cout<<(char)(z+64)<<" ";
	cout<<"\n";
	}
}

