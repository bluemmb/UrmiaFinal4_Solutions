
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int m = 0 , nn = n;
	while ( nn )
	{
		m = m*10 + (nn%10);
		nn /= 10;
	}
	
	cout<<max(m,n)<<"\n";
	
	return 0;
}
