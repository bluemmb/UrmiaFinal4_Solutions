
#include <iostream>
#include <string.h> 
using namespace std;
 
int main()
{
	bool a[10];
	char s[5];
	
	cout<<"0123"<<"\n"; cout.flush();
	cin>>s;
	if ( strcmp(s , "GGGG") == 0 ) return 0;
	for (int i=0,j=0 ; i<4 ; i++,j++) a[j] = (s[i]!='R');
	
	cout<<"4567"<<"\n"; cout.flush();
	cin>>s;
	if ( strcmp(s , "GGGG") == 0 ) return 0;
	for (int i=0,j=4 ; i<4 ; i++,j++) a[j] = (s[i]!='R');
	
	cout<<"8989"<<"\n"; cout.flush();
	cin>>s;
	if ( strcmp(s , "GGGG") == 0 ) return 0;
	for (int i=0,j=8 ; i<2 ; i++,j++) a[j] = (s[i]!='R');
	
	// --------------------------------------------------------------
	
	int v[4];
	for (int i=0,j=0 ; i<=9 ; i++) 
		if (a[i] == true) 
			v[j++] = i;
	
	// --------------------------------------------------------------
	
	for ( int p=0 ; p<4 ; p++ )
		for ( int q=0 ; q<4 ; q++ )
			for ( int r=0 ; r<4 ; r++ )
				for ( int t=0 ; t<4 ; t++ )
				{
					if ( p==q || p==r || p==t || q==r || q==t || r==t ) continue;
					
					cout<<v[p]<<v[q]<<v[r]<<v[t]<<"\n";
					cout.flush();
					
					cin>>s;
					if ( strcmp( s , "GGGG" ) == 0 )
					{
						return 0;
					}
				}
	
    return 0;
}