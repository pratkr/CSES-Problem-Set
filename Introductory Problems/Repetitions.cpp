#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    ll b , c = 0 , m = 0 , d ,e;
    b = s.length();
    char ch = s[0];
    for(int i = 0  ; i < b+1; i++)
    {
        if(ch == s[i])
        {   
            ++c;        
            m = max(m, c);
        }
        else if( ch != s[i]) 
        {   
           
            d = b-i;
            e = (b-d);
            ch = s[e];
            m = max(c , m );
            c = 1;
            }   
    }
    cout<<m;
}



