#include<stdio.h>
#include<stdlib.h>
int minMaxDifference(int num) {
    int k, a[7], b[7], max, min, i, m, z;
    a[7] = num;
    k = a[0];
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == k)
        {
            a[i] = 9;
        }
    }
    max = a[7];
    b[7] = num;
    m = a[0];
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == m)
        {
            b[i] = 0;
        }
    }
    min = a[7];
    z = max - min;
    return z;

}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = minMaxDifference(num);
    printf("%d", result);
    return 0;
}