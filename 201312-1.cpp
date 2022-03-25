#include<bits/stdc++.h>
using namespace std;
int n; 
int s[10010];
int main(){
	cin>>n;
	int maxNum=0;
	int res=-1;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		s[num]++;
		if(s[num]>maxNum){
			maxNum=s[num];
			res=num;
		}else if(s[num]==maxNum){
			res=min(num,res);
		}
	}
	cout<<res;	
	return 0;
} 
