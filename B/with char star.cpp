
#include <iostream>
#include <string.h>
using namespace std;

void print_spaces(int n)
{
	while(n--)
		cout<<" ";
}

int main()
{
	int n;
	char s[105] = ""; 
	
	cin>>n;
	cin>>s;
	
	cout<<s<<"\n";
	
	for(int i=1 ; i<=n-2 ; i++)
	{
		cout<<s[i];
		print_spaces(n-2);
		cout<<s[n-1-i]<<"\n";
	}
	
	for ( int i=n-1 ; i>=0 ; i-- )
		cout<<s[i];
	cout<<"\n";
	
	return 0;
}
