#include <iostream>

using namespace std;

int main()
{
    /** Method altered due to not using the command prompt as compiler but Code::Blocks,
    this resulted in the task being to run it in the command prompt to not be able to be fulfilled. **/

    int year;
    cout <<" year?" << endl;
    cin>>year;

    if(year%4==0 && (year%100==!0 || year%400==0)){
        cout << year<< " was a leap year" << endl;
    }
    else{
        cout << year<< " was not a leap year" << endl;
    }
    return 0;
}
