#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
long n;
cin>>n;
    if(n>=1 && n<=1000000)
    {
    printf("%ld",n);
    printf(" ");
                while (n > 1)
                {
                     if(n%2 == 0)
                        {
                         n=n/2;
                         printf("%ld", n);
                         printf(" ");
                        }
                            else if(n%2 == 1)
                            {
                                n=(n*3)+1;
                                printf("%ld",n);
                                printf(" ");
                             }
                }
    }
return 0;
}