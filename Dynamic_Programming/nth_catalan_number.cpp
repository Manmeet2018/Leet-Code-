#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> // Lib used to handle the int of bigger size LINK-> https://www.geeksforgeeks.org/advanced-c-boost-library/  
using boost::multiprecision::cpp_int; // using the namespace of boost
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007
cpp_int arr[100+1];
void maker()
{
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<=100; i++)
    {
        arr[i]=0;
        for(int j=1; j<=i; j++)
            arr[i] += (arr[j-1] * arr[i-j]);
    }
}
inert main()
 {
	int t; cin>>t;
	maker();
	while(t--)
	{
	    int n; cin>>n;
	    cout<<arr[n]<<"\n";
	}
	return 0;
}
