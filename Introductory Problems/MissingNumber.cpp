#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long n , ele, diff ;
    cin>>n;
    long sum ;
    sum = n*(n+1)/2;
    long sum2 = 0;
    for ( int i = 1 ; i < n ; i++ )
    {
        cin>>ele;   
        sum2 = ele + sum2;
    }
    diff = sum - sum2;
    cout<<diff;
  

return 0;
}
