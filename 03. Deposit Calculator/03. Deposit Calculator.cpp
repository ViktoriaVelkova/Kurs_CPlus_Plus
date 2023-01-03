

#include <iostream>
using namespace std;

int main()
{
    double depozitSyma;
    cin >> depozitSyma;
    int period;
    cin >> period;
    double lihvenProcent;
    cin >> lihvenProcent;
    double Procent = lihvenProcent / 100;

    double TotalSuma = depozitSyma + period * ((depozitSyma * Procent) / 12);
    cout << TotalSuma;
    return 0;
}


