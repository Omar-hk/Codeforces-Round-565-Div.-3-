#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int res[3] = {0 , 0 , 0};
    for(int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      x %= 3;
      res[x]++;
    }
    res[0] += min(res[1],res[2]);
    int x = min (res[1],res[2]);
    res[1] -= x;
    res[2] -= x;
    res[0] += res[1] / 3;
    res[0] += res[2] / 3;

    cout << res[0] << endl;
}
int main() {
    iostream::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);


    long long tt;
    cin >> tt;
    while(tt--)
    {
      solve();   
    }
    return 0;
}
