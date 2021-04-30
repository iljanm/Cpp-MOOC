#include <iostream>

using namespace std;

int main()
{
    float weight;
    float height;
    cout << "Please enter weight in pounds:" << endl;
    cin>>weight;
    cout << "Please enter height in inches:" << endl;
    cin>>height;
    cout<<"BMI is: "<<0.453592 *weight/(0.00064516*height*height)<<endl;
    return 0;
}
