#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=n;col++){
			cout<<char('A'+col-1)<<" ";
		}
		cout<<endl;
	}
}