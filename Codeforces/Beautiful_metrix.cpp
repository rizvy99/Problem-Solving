#include<iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}
