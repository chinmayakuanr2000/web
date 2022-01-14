#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d,n;
	float s=0;
	cin>>d>>a;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    s+=a[i];
	}
	if(s>=((d*90)/100))
	    cout<<"warning";
	else
	    cout<<"safe";
	
	return 0;
}
