#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter;
    cout << "Please enter a value for n." << endl;
    cin>>n;

    cout << "The first n even numbers are:" << endl;
    for(counter=1; counter<=n; counter++){
        cout << counter*2 << endl;
    }

    return 0;
}
