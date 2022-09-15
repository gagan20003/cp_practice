#include <iostream>
using namespace std;

int main()
    {
        int t;
        cout<<"no. of times you want to check: ";
        cin>>t;
        while(t--){
        int m, n;
        cout<<"enter m: ";
        cin>>m;
        cout<<"enter n: ";
        cin>>n;
        while(m!=n)
        {
            if(m>n)
            m=m-n;
            else if(n>m)
            n=n-m;
        }
        cout<<"GCD is "<<m;
        }
        
        
        return 0;
    }