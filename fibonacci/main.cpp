#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c,i;

    cout<< "Please enter a positive integer greater than 1:"<<endl;
    cin>>n;

    cout<<"\n Fibonacci Series: \n"<<endl;

    for(int i = 0; i<n; i++)
    {
       c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }

    return 0;
}
