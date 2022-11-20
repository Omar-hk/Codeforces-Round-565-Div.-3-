#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    long long tt;
    cin >> tt;
    while(tt--)
    {
        long long n,res=0;
        cin >> n;
 
        while(n % 2 ==0)
        {
            n/=2;
            res++;
        }
        while (n%3==0)
        {
            n/=3;
            res+=2;
        }
        while (n%5 == 0)
        {
            n/=5;
            res+=3;
        }
        cout << (n==1?res:-1)<<endl;
        
        
    }
    return 0;
}
