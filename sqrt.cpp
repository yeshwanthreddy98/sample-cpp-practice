#include <bits/stdc++.h>
using namespace std;

float sqrt(float num, float low, float high)
{
    float mid = (low + high) / 2;
    if (mid == low || mid == high)
        return mid;
    if (mid * mid < num)
        return sqrt(num, mid, high);
    else
        return sqrt(num, low, mid);
}

int main()

{
    cout << sqrt(2, 1, 2) << endl;

    return 0;
}