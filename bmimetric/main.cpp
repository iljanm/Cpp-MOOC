#include <iostream>

using namespace std;

int main()
{
    float weight;
    float height;
    cout << "Please enter weight in kilograms:" << endl;
    cin>>weight;
    cout << "Please enter height in meters:" << endl;
    cin>>height;
    cout<<"BMI is: "<<weight/(height*height)<<endl;
    return 0;
}
