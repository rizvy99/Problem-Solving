#include<bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>X>>Y;
	    int sum=X+Y;
	    if(sum>6){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

