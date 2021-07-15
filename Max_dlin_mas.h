#ifndef Max_dlin_mas_H
#define Max_dlin_mas_H

double Max(double* a, int n)
{
    double  max = 0.0;
    for (int i = 0; i < n; i++)
        if (i == 0 || a[i] > max) max = a[i];
    return max;
}

#endif