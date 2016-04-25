
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
	bool a[10] = {};
	string t;
	
	cout<<"0123\n"; cout.flush();
	cin>>t;
	if (t=="GGGG") return 0;
	for (int i=0,j=0 ; i<4 ; i++,j++) a[j] = (t[i]!='R');
	
	cout<<"4567\n"; cout.flush();
	cin>>t;
	if (t=="GGGG") return 0;
	for (int i=0,j=4 ; i<4 ; i++,j++) a[j] = (t[i]!='R');
	
	cout<<"8901\n"; cout.flush();
	cin>>t;
	if (t=="GGGG") return 0;
	for (int i=0,j=8 ; i<2 ; i++,j++) a[j] = (t[i]!='R');
	
	// --------------------------------------------------------------
	
	string s; s.resize(4);
	for (int i=0,j=0 ; i<=9 ; i++) 
		if (a[i]) s[j++] = i+'0';
	
	// --------------------------------------------------------------
	
	int step = 0;
	while ( true ) 
	{
		step++;
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
		
		/*
		// Reds
		for (int i=0 ; i<4 ; i++)
		{
			if ( e[i] == ' ' )
			{
				e[i] = r;
				r++;
			}
		}
		*/
		
		s = e;
	}
	
    return 0;
}