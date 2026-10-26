
#include <iostream>
#include <iomanip>
using namespace std;

void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int SumEven(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }

    return sum;
}

template <typename T>
T SumEven(T a[], int n)
{
    T sum = T();

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }

    return sum;
}

int main()
{
    const int n = 6;
    int a[n] = { 2, 7, 4, 9, -6, 8 };

    cout << "Array: ";
    Print(a, n);

    int result1 = SumEven(a, n);
    cout << "Sum = " << result1 << endl;

    int result2 = SumEven<int>(a, n);
    cout << "Template Sum = " << result2 << endl;

    return 0;
}
