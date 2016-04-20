
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n; cin>>n;
	
	while( n-- )
	{
		char s[10005];
		int cnt[26] = {};
		
		cin>>s;
		int sl = strlen(s);
		
		for (int i=0 ; i<sl ; i++) 
			cnt[ s[i]-'A' ]++;
		
		int ans = 1e9;
		for (int i=0 ; i<26 ; i++) 
		{
			if (cnt[i] != 0)
				ans = min( ans , cnt[i] );
		}
		
		cout<<ans<<"-Anagram\n";
	}
	
	return 0;
}