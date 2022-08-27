
#include <iostream>
using namespace std;
int main()
{
    int i, a, j, n, number[30];
    cout << "******Enter valu of N*******" << endl;
    cin >> n;

    cout << "***Enter Numbers:***" << endl;
    for (i = 0; i < n; ++i)
        cin >> number[i];

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    cout << "*****The assending orders are: ******" << endl;
    for (i = 0; i < n; ++i)
        cout << number[i] << endl;

    int number[10] = {54, 65, 72, 87, 25};

    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (number[i] > number[j])

            {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        cout << number[i] << endl;
    return 0;
}
