

#include <iostream>

using namespace std;

int main()
{
    double brdogFood;
    cin >> brdogFood;
    double brcatFood;
    cin >> brcatFood;
    double PriceDogFood = 2.50;
    double PriceCatFood = 4;
 
    double DogFood = brdogFood * PriceDogFood;
    double CatFood = brcatFood * PriceCatFood;

    double Totalfood = DogFood + CatFood;

    cout << Totalfood << " lv.";

        return 0;
}


