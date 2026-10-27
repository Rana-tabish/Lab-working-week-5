#include <iostream>
using namespace std;//Name : Rana tabish  Roll No : 0119
int main() {
    int units;
    cout << "Enter units: ";
    cin >> units;
    if (units <= 100) {
        cout << "Low usage";
    }
    else if (units <= 300 &&units >=101)
    {
        cout << "Medium usage";
    }
    else {
        cout << "High usage";
    }
    return 0;
  }