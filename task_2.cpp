#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main()
{
    int bill;
    cout << "Enter a bill amount: ";
    cin >> bill;
    if (bill >= 5000){
        cout << "Bill amount: " << bill  << endl;
        cout <<"You qualify for a discount." << endl;
     }
    else
        cout << "The bill amount is not eligible for a discount." << endl;

    return 0;
}
/*
Whyis >= more suitable than > for this task?
 Answer: The >= operator is more suitable than > 
 for this task because it includes the boundary condition.
  If the bill amount is exactly 5000,
 it should qualify for the discount, which is what >= represents.
  Using > would exclude the case where the bill amount is exactly 5000,
   even though it should be eligible for the discount.
*/