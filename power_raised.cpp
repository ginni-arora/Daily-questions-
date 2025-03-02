#include<bits/stdc++.h>
using namespace std;
int power_raised(int x, int n){
	if(n==0)
	return 1; // kyuki kisi ki power 0 ho vo 1 hi print krugi 
	return x* power_raised(x,n-1);
}
int main(){
	int x;
	int n;
	cin>>x>>n;
	cout<<power_raised(x,n)<<endl;
	return 0;
}
