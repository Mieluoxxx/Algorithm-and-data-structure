#include <iostream>
using namespace std;
const int maxn=1e5;
int N,S[maxn],T[maxn];//分别保存开始时间和结束时间
pair<int,int> itv[maxn];//用pair数组保存开始时间和结束时间
int main(){
	//对pair进行的是字典序比较
	//为了让结束时间早的工作排在前面，将T放在前面，S放在后面
    cin >> N;
	for(int i=0;i<N;i++){
        cin >> S[i] >> T[i];
		itv[i].first=T[i];
		itv[i].second=S[i];
	}
	sort(itv,itv+N);
	//t是最后工作所选的结束时间
	int ans=0,t=0;
	for(int i=0;i<N;i++){
		if(t<itv[i].second){//如果结束时间在开始时间之前
			ans++;
			t=itv[i].first;//将t进行更新
		}
	}
	cout << ans << endl;
    return 0;
}
