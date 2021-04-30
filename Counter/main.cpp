#include <iostream>

using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    int money;
    int dollar;
    int cents;

    cout << "# of quarters" << endl;
    cin>>quarters;
    cout << "# of dimes" << endl;
    cin>>dimes;
    cout << "# of nickels" << endl;
    cin>>nickels;
    cout << "# of  pennies" << endl;
    cin>>pennies;
    money = pennies + 5*nickels + 10*dimes + 25*quarters;
    dollar = money/100;
    cents = money%100;
    cout <<"The total is "<<dollar<<" dollars and "<<cents<<" cents" << endl;


        return 0;
    }
