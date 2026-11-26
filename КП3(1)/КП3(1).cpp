#include <iostream>
using namespace std;

int main()
{
    double x;
    int n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    double s = 1, a = 1;
    for (int i = 1; i < n; i++)
        {
       a = a * x / i;
       s = s + a;
        }
    cout << "Sum s = " << s << endl;
    return 0;
}
