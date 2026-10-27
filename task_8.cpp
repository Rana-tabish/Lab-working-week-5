#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main() {
int marks;
cout << "Enter marks: ";
cin >> marks;
if (marks >= 50) {
cout << "Pass" << endl;
}
else {
cout << "Fail" << endl;
}
return 0;
}
/*
In this program we only have to change the condition of if by adding > sign
Marks: 49-> Fail    Enter marks: 49     Fail
Marks: 50-> Pass    Enter marks: 50     Pass
Marks: 75-> Pass    Enter marks: 75     Pass
*/