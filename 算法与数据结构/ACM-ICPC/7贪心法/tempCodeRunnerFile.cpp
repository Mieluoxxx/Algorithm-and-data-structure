#include <bits/stdc++.h>
using namespace std;
const int maxn = 100010;

string mkstring(int k){
	int reverse[maxn]={0},len=0;
	string to;
	while (k)
    {
        reverse[len] = k % 10;
        k /= 10;
        len++;
    }
	for(int i=len-1;i>=0;i--) 
        to += (reverse[i]+ '0');
	return to;
}
int ff(int &n,int &m){
	int k = m/n+1;
	int factor=__gcd(n*k-m, m*k);
	n = (n*k-m) / factor;
    m = m * k / factor;
	return k;
}
int main(){
	int n,m;
	while (cin>>n>>m) 
    {
		int f=0,final=1;
		string ans;
		int _=__gcd(n,m);
		n/=_,m/=_;
	
		while (n!=1) {
			int k=ff(n,m);
			if(k<1) 
            {
                cout << "No found!" << endl;
                final = 0;
                break;
            }
	
			ans += (f?"+":"");
			ans += "1";
			ans +="/" + mkstring(k);
	
			if(!f) f=1;
		}
		if(n==1) 
        {
			ans += (f ? "+" : "");
			ans += "1";
			ans += "/" + mkstring(m/n);
		}
	
		if(final) cout << ans << '\n';
	}
	return 0;

}
