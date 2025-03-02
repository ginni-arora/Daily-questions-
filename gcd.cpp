#include<bits/stdc++.h>
using namespace std;
int g_c_d(int x, int y){
	if(y==0)
	return x;
	return g_c_d(y, x%y);
}
int main(){
	int x;
	int y;
	cin>>x>>y;
	cout<<g_c_d(x,y)<<endl;
	return 0;
}
