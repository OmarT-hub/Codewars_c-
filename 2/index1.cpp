#include <iostream>
#include<cmath>
using namespace std;
// size_t remender(size_t n)
// {

//     return n % 2;
// }

bool is_even(double n)
{
    if (fmod(n,2) == 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    double x;
    cout << "Enter x: ";
    cin >> x;
    cout << "\n";
    // cout << "Remender: " << remender(x) << "\n";

    if (is_even(x) == true)
    {
        cout << "Is even" << "\n";
    }
    else
        cout << "Is not even" << "\n";

    return 0;
}