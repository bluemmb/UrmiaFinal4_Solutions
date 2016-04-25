
#include <bits/stdc++.h>
typedef long long int lli; 
using namespace std;
 
int nextEmpty( string x , int p )
{
	for (int i=0 ; i<4 ; i++)
	{
		p = (p+1)%4;
		if ( x[p] == ' ' ) return p;
	}
}
 
int main()
{
	string s = "0123" , t;
	int r = '4';					// next number
	
	while ( true ) 
	{
		cout<<s<<"\n"; cout.flush();
		
		cin>>t;
		if ( t == "GGGG" ) break;
		
		string e = "    ";
		
		// Greens
		for (int i=0 ; i<4 ; i++)
		{			
			if (t[i] == 'G')
			{	
				e[i]=s[i];
			}
		}
		
		// Yellows
		for (int i=0 ; i<4 ; i++)
		{
			if (t[i] == 'Y')
			{
				e[ nextEmpty(e , i) ] = s[i];
			}
		}
		
		// Reds
		for (int i=0 ; i<4 ; i++)
		{
			if ( e[i] == ' ' )
			{
				e[i] = r;
				r++;
			}
		}
		
		s = e;
	}
	
    return 0;
}