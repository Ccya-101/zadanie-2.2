#include <iostream>
#include <cmath>
#include <locale> 
#include <string>
#include "Max_dlin_mas.h"
#include "Min_dlin_mas.h"
#include "Mediana.h"
#include "Sr_zn_mas.h"
using namespace std;
int main()
{
    system("color F0");
    int n;
    int Result = 0;
    cout << "Enter the number of array elements : ";
    cin >> n;

    double* a = new double[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    int command;
    while (1) {
        cout << "\nEnter command:\n";
        cout << "1) Print the minimum element of the array.\n";
        cout << "2) Print the maximum element of the array.\n";
        cout << "3) Print the middle element of the array.\n";
        cout << "4) Print the mediana of the array.\n";
        cout << "5) Exit.\n";
        cin >> command;
        switch (command) {
        case 1:
            Result = Min(a, n);
            cout << "\nresult = " << Result;
            break;
        case 2:
            Result = Max(a, n);
            cout << "\nresult = " << Result;
            break;
        case 3:
            Result = Work(a, n);
            cout << "\nresult = " << Result;
            break;
        case 4:
            Result = SearchMediana(a, n);
            cout << "\nresult = " << Result;
            break;
        case 5:
            return 0;
        default:
            cout << "Unknown command\n";
            break;
        }

    }




    delete[]a;
    system("pause");
    return 0;
}
