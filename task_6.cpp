#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main()
{
    int marks;
    cout <<"Enter your marks:";
    cin >> marks;
    if(marks >= 90&&marks <= 100){
        cout << "Grade A" << endl;
    }
    else if(marks >= 80&&marks <=89){
        cout << "Grade B" << endl;
    }
    else if(marks >= 70&&marks <=79){
        cout << "Grade C" << endl;
    }
    else if(marks >= 60&&marks <=69){
        cout << "Grade D" << endl;
    }
    else{
        cout <<"Grade F" << endl;
    }
    return 0;
}