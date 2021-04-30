#include <iostream>

using namespace std;

int main()
{
    int numb[4];
    int even=0;
    cout << "Please enter 4 positive integers, separated by a space:" << endl;
    cin>>numb[0]>>numb[1]>>numb[2]>>numb[3];

    for(auto x:numb){

        if(x%2==0){
            even +=1;
        }
    }

    if(even<2){
        cout << "more odds" << endl;
    }else if(even==2){
        cout << "same number of evens and odds" << endl;
    }else{
        cout << "more evens" << endl;
    }
    return 0;
}
