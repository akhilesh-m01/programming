#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n;
	cin>>n;
	for(row=1;row<=n;row++){
		char ch='A'+n-row;
		for(col=1;col<=row;col++){
			cout<<ch++<<" ";
		}
		cout<<endl;
	}
}