#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[10];
    int highest=0;
    int position=0;
    for(int i=0;i<10;i++){
        cin>>number[i];
        if(number[i]>highest){
            highest=number[i];
            position=i+1;
        }
    }
    cout<<highest<<endl;
    cout<<position<<endl;
    return 0;
}
