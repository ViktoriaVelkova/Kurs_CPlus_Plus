
#include <iostream>
using namespace std;

int main()
{
    int brchiken; cin >> brchiken;
    int brfish; cin >> brfish;
    int brVegetarianmenu; cin >> brVegetarianmenu;
    double chiken = brchiken* 10.35;
    double fish = brfish * 12.40;
    double Vegetarian = brVegetarianmenu* 8.15;
    double delivery = 2.50;

    double Price = chiken + fish + Vegetarian;
    double PriceDesert = (Price * 20) / 100;
    //cout << Price << endl;
    double TotalPrice = Price + PriceDesert + delivery;
    cout << TotalPrice;



}


