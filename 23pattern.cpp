#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n,x=1;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=n-row;col++){
			cout<<" ";
		}
		for(col=1;col<=row;col++){
			cout<<x++;
		}
		cout<<endl;
	}
}