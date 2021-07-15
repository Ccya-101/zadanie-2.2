#ifndef Sr_zn_mas_H
#define Sr_zn_mas_H
double Work(double* a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (double)sum / n;
}

#endif