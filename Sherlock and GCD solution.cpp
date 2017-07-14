#include <iostream>
using namespace std;

int gcd(int a,int b) 
{
    int temp;
    while(b > 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        bool flag=0;      
        int n; cin>>n;
        int a[1000];

        for (int i = 0; i < n; ++i)
        {
           cin>>a[i];
        }

        int result = a[0];
        for(int i=1; i<n; i++) 
        {
            result = gcd(result, a[i]);
        }

        for (int i = 0; i < n; ++i)
        {     
            if(result == a[i])
            {
                flag=1;
                break;
            }  
        }

        if (result==1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
