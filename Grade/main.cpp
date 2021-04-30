#include <iostream>

using namespace std;

int main()
{
    float grade1;
    float grade2;
    cout << "Grades:" << endl;
    cin>>grade1>>grade2;

    if(grade1<60 && grade2<60){
        cout << "Student Failed:(" << endl;
    }else if(grade1>=95 && grade2>=95){
        cout << "Student Graduated with Honors:)" << endl;
    }else{
        cout << "Student Graduated!" << endl;
    }

    return 0;
}
