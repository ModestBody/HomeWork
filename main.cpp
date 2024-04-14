#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(const string& str, int K)
{
    int len = str.length();
    if (len % K != 0 || K <= 0)
    {
        return false;
    }
    for (int i = 0; i < len; ++i)
    {
        if (str[i] != str[i % K])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    int K;
    cout << "Enter the line: ";
    cin >> input;

    cout << "Enter K: ";
    cin >> K;

    if (IsKPeriodic(input, K))
    {
        cout << "The string is " << K << " - periodic." << endl;
    }
    else
    {
        cout << "The string is not " << K << " - periodic." << endl;
    }

    return 0;
}
