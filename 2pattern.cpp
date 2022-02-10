#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=n;col>=1;col--){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}