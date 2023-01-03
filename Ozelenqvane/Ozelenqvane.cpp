

#include <iostream>
using namespace std;

int main()
{
    double kvMetri;
    cin >> kvMetri;
    double PriceOfkvMetri = 7.61;
    double discont = 0.18;
    
    double Price = kvMetri * PriceOfkvMetri;
    double  TotalDiscont= Price * discont;
    double TotalPrice = Price - TotalDiscont;

    cout << "The final price is: " << TotalPrice << " lv."<<endl;
    cout << "The discount is : " << TotalDiscont << " lv."<<endl;
    return 0;

}


