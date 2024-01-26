#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    string z;
    for(i=0;i<z.size();i++)
    {
        cin>>z[i];
        if (z.size()==n)
        {
            cout<<z[i];
        }
        else if(z.size()>n)
        {
            for(i=1;i<z.size();i=z.size()-1)
            {
                cout<<z[0]<<z.size();
            }
        }
    }
    return 0;

}
