#include <iostream>
using namespace std;
int n = 4;
int temp1 = n;
int temp2 = n;
int temp3 = n;
int temp4 = n;
int temp5 = 2;
int temp6 = 3;
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << temp1;
            temp1--;
        }
        temp1 += i;
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << temp2;
        }
        temp2--;
        for (int j = 0; j < i; j++)
        {
            cout << temp3;
            temp3++;
        }
        if (i > 0)
        {
            temp3 -= i + 1;
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2 - i; j++)
        {
            cout << temp4;
            temp4--;
        }
        temp4 += n - 2 - i;
        for (int j = 0; j < 2 * i + 3; j++)
        {
            cout << temp5;
        }
        temp5++;
        for (int j = 0; j < n - 2 - i; j++)
        {
            cout << temp6;
            temp6++;
        }
        temp6 -= n - i - 3;
        cout << endl;
    }
    return 0;
}
