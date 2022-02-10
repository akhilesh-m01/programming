#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			cout<<char('A'+row-1)<<" ";
		}
		cout<<endl;
	}
}