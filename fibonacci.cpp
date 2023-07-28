#include <iostream>

using namespace std;

int main()
{
    cout << "enter number";
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {

        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
}