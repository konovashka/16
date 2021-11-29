#include <iostream>
using namespace std;
const int n = 5;
int main()
{
    int sum = 0, i;
    int m;
    m = 0;
    int a[n] = {1, 2, 3, 4, 5};
   /* for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);*/  
    for (i = 0; i < n / 2; i++)
      sum = sum + a[i] * a[n -1 - i];
    sum = sum * 2;
    if (n % 2 != 0)
    {
        m = a[n / 2] * a[n / 2];
        sum += m;
        //printf("%d", m);
    }
    printf("%d", sum);
    return 0;
}