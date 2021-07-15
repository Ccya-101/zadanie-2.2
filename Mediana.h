#ifndef Mediana_H
#define Mediana_H

double SearchMediana(double* a, int n){ 
    int SumEveryone = 0; 
    for(int i = 0; i < n; i++){ 
        for(int j = i+1; j < n; j++){ 
            if(a[i] > a[j]){ 
                int tmp = a[j]; 
                a[j] = a[i]; 
                a[i] = tmp; 
            }
        }
        SumEveryone += a[i]; 
    } 
    double Mediana = 0;
    if(n % 2 == 0){ 
        int k = n / 2 - 1; 
        Mediana = a[k]; 
    }
    else{ 
        int k = n / 2;
        Mediana = a[k];
    }
    return Mediana; 
}

#endif
