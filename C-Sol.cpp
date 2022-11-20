#include <bits/stdc++.h>
using namespace std;

int main() {
    iostream::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
	cin>>n;
	int ar[n+1];
	
	for(int i=0;i<n;i++)cin>>ar[i];
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	// 4 8 15 16 23 42
	for(int i=0;i<n;i++){
		if(ar[i]==4)c1++;
		else if(ar[i]==8 && c1){
			c2++;
			c2=min(c2,c1);
		}
		else if(ar[i]==15 && c2){
			c3++;
			c3=min(c3,c2);
		}
		else if(ar[i]==16 && c3){
			c4++;
			c4=min(c4,c3);
		}
		else if(ar[i]==23 && c4){
			c5++;
			c5=min(c5,c4);
		}
		else if(ar[i]==42 && c5){
			c6++;
			c6=min(c6,c5);
		}
	}
	cout<<n-(c6*6)<<endl;
}
