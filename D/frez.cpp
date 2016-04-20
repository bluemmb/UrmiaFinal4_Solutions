#include <iostream>
using namespace std;
int arr[26]; // baraye shomordan har harf
int main()
{
	int T;cin>>T;//teydade testha 
	while(T--)
	{
		string str;cin>>str;
		for(int i=0;i<str.length();i++)
			arr[str[i]-'A']++;
		int minn=10001;
		for(int i=0;i<26;i++)
		{
			if(arr[i])minn = min(minn,arr[i]);
			arr[i]=0;// dige arr[i] ro lazem nadarim 0 mikonim ke to reshte dige az aval beshmare
		}
		cout<<minn<<"-Anagram\n";
	}
	return 0;
}
