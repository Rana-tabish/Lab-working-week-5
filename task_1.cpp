#include <iostream>//Name : Rana tabish  Roll No : 0119
using namespace std;
int main()
{
int number;
cout << "Enter a number: ";
cin >> number;
if (number > 0)
    cout << "The number is positive." << endl;

return 0;
}
/*
What happens for 0 and-4? Explain in a comment why the message is not printed.
 Answer: For the input values 0 and -4,
 the message "The number is positive."
  is not printed because the condition in the if statement (number > 0)
   evaluates to false for both of these inputs.
*/