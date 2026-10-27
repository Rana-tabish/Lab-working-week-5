#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main()
{
    int temp;
    cout <<"Enter the temperature in Celsius: ";
    cin>> temp;
    if (temp < 10)
    {
        cout << " Cold" << endl;
    }
    else if (temp < 25) // This condition turns true when we enters a tempreature 18
    {
        cout << "Pleasant" << endl;
    }
    else if(temp < 35)
    {
        cout << "Warm" << endl;
    }
    else
    {
        cout << "Hot" << endl;
    }
    return 0;
}