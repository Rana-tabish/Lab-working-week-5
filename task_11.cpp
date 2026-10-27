#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if  (age < 0)
    {
        cout << "Invalid age" << endl;
    }
    else
    {
        if (age <5)
        {
            cout << "You ticket is free" << endl;
        }
        else if (age >=5 && age <=17)
        {
            cout << "You ticket is Rs 200" << endl;
        }
        else if (age >=18 && age <=59)
        {
            cout << "You ticket is Rs 500" << endl;
        }
        else
        {
            cout << "You ticket is Rs 300" << endl;
        }
    }
    
    return 0;
}