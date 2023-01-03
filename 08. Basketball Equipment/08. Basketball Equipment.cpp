

#include <iostream>
using namespace std;

int main()
{
    int basketballPracticeFee; cin>> basketballPracticeFee;
    double PriceBasketballShoes = basketballPracticeFee - ((basketballPracticeFee * 40) / 100);
    //cout << PriceBasketballShoes << endl;
    double PriceEkip = PriceBasketballShoes - ((PriceBasketballShoes * 20) / 100);
    //cout << PriceEkip << endl;
    double PriceBool = PriceEkip * 1 / 4;
    //cout << PriceBool << endl;
    double Priceaccessories = PriceBool * 1 / 5;  //Цена на баскетболни аксесоари: 1 /  5 от 43.80 = 8.76  от->*
    //cout << Priceaccessories << endl;
    double TotalPrice = PriceBasketballShoes + PriceEkip + PriceBool + Priceaccessories+ basketballPracticeFee;
    cout << TotalPrice << endl;
    
}


