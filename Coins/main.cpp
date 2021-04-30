#include <iostream>

using namespace std;

int main()
{
    int dollar;
    int cents;

    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "# of dollars:" << endl;
    cin>>dollar;
    cout << "# of cents:" << endl;
    cin>>cents;

    quarters = 4*dollar;
    quarters += cents/25;
    cents %= 25;
    dimes = cents/10;
    cents %= 10;
    nickels = cents/5;
    cents %= 5;
    pennies = cents;

   cout << "The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies" << endl;

    return 0;
}
