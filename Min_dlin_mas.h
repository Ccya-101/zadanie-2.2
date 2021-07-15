#ifndef MIn_dlin_mas_H
#define Min_dlin_mas_H

double Min(double* a, int n)
{
    double min = 0.0;
    for (int i = 0; i < n; i++)
        if (i == 0 || a[i] < min) min = a[i];
    return min;
}

#endif