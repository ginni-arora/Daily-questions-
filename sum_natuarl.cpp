#include<bits/stdc++.h>
using namespace std;
int sum_of_natural(int n){
	if(n==0){
		return 0;
	}
	return n + sum_of_natural(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<sum_of_natural(n)<<endl;
	return 0;
	
}
