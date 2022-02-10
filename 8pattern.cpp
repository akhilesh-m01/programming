#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col,n,x;
	cin>>n;
	for(row=1;row<=n;row++){
		x=row;
		for(col=1;col<=row;col++){
			cout<<x--<<" ";
		}
		cout<<endl;
	}
}