#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=n-row+1;col++){
			cout<<"*";
		}
		cout<<endl;
	}
}