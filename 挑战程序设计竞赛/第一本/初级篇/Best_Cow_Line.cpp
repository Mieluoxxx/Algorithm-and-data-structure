#include <iostream>
using namespace std;
int N;
char S[10001];
int main(){
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> S[i];
	int a=0,b=N-1;
	while(a<=b){
		//将左起和右起的字符串进行比较
		bool left=false;
		for(int i=0;a+i<=b;i++){
			if(S[a+i]<S[b-i]){
				left=true;//左边的字典序小
				break;
			}
			else if(S[a+i]>S[b-i]){
				break;//右边的字典序小
			}
		}
		if(left)putchar(S[a++]);
		else putchar(S[b--]);
	}
	putchar('\n');
    return 0;
}
