

#include <iostream>
using namespace std;

int main()
{
    int SafetyNylon; cin>> SafetyNylon;
    int DopulnitelnoSafetyNylon = 2;

    int Paint; cin >> Paint;
    int PaintThinner; cin >> PaintThinner;
    int HoursofMastor; cin >> HoursofMastor;

    double SafetyNylon1 = 1.50;
    double Paint1 = 14.50;
    double PaintThinner1 = 5.00;
    int amountOfPaint = 10;//10%
    double AmountForBags = 0.40;
    double  SumofAllMaterialCosts = 30; //30%

    double PriceSafetyNylon = (SafetyNylon + DopulnitelnoSafetyNylon) * SafetyNylon1;
   // cout << PriceSafetyNylon << endl;
    double PricePaint = (Paint + (amountOfPaint/ 100)) * Paint1;// грешно смята
    cout << PricePaint << endl;
    double PriceThinner = PaintThinner * PaintThinner1;
   // cout << PriceThinner << endl;
    double TotalOfMaterials = PriceSafetyNylon + PricePaint + PriceThinner + AmountForBags;
    //cout << TotalOfMaterials << endl;
    double PriceOfmasters = (TotalOfMaterials * (SumofAllMaterialCosts/ 100)) * HoursofMastor;// грешно смята
   /// cout << PriceOfmasters << endl;
    double Total = TotalOfMaterials + PriceOfmasters;
    cout << Total;


    
}

