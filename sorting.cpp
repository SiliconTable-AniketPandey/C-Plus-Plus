#include <iostream>
using namespace std;
// method to sort elements in ascending order
void ascending(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
// method to sort elements in descending order
void descending(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// main method
int main()
{
    int a[10], n, i, choice;
    char ch;
    do
    {
        cout << "enter the size of the array";
        cin >> n;
        cout << "enter the elements";
        for (i = 0; i < n; i++)
            cin >> a[i];
        cout << "elements before sorting";
        cout << endl;
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        cout << "1. ascending order sort 2. descending order sort";
        cout << endl
             << "enter your choice: ";
        cin >> choice;
        switch (choice)
        {

        case 1:
            cout << "elements after sorting";
            ascending(a, n);
            cout << endl;
            cout << endl;
            for (i = 0; i < n; i++)
                cout << a[i] << " ";
            break;
        case 2:
            cout << "elements after sorting";
            descending(a, n);
            cout << endl;
            cout << endl;
            for (i = 0; i < n; i++)
                cout << a[i] << " ";
            break;
        default:
            cout << "invalid option";
        }
        cout << endl
             << "do u want to continue y/n";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << "bye";
}