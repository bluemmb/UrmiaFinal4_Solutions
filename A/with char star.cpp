
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char c[10] = "";
	char t[10] = "";
	
	cin>>c;
	int cl = strlen(c);
	
	for ( int i=0 , j=cl-1 ; i<cl ; i++ , j-- )
		t[i] = c[j];
	
	if ( strcmp( c , t ) >= 0 )
		cout<<c;
	else
		cout<<t;
	
	return 0;
}