#include <iostream>
using namespace std;


int gcd(int a, int b)
{
    while(b != 0)
    {
        int remain = a%b;
        a=b;
        b=remain;
    }
    return a;
}


int main()
{
    
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b)<<endl;
    return 0;
}
