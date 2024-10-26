#include <iostream>
using namespace std;

int odd_count(int n)
{

        if (n % 2 != 0)
        {
            for (int i = 1; i < n; i += 2)
            {
                cout<<i<<" ";
            }
        }

}

int main()
{
    int x;
    cout << "Enter number  : ";
    cin >> x;
    cout << "\n";
    odd_count(x);

    return 0;
}