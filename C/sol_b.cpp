
#include <iostream>
using namespace std;

int main()
{
	int n , t;
	cin>>n>>t;
	
	char s[100005] = "";
	cin>>s;
	
	int r = t%4;
	bool f = 0;
	for (int i=0 ; i<n ; i++)
	{
		switch (r)
		{
			case 0 : 
				cout<<s[i]; 
			break;
			
			case 2 :
				if (s[i] == '|' ) cout<<'|';
				else cout<<( s[i]=='>' ? '<' : '>' );
			break;
			
			case 1 : case 3 :
				if ( s[i] == '|' ) cout<<( f ? '>' : '<' ) , f = !f;
				else cout<<'|';
			break;
		}
	}
	cout<<"\n";
	
	return 0;
}