#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    int change;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int next = 0; next < n - i - 1; next++)
        {
            if (a[next] > a[next + 1])
            {
                change = a[next];
                a[next] = a[next + 1];
                a[next + 1] = change;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
