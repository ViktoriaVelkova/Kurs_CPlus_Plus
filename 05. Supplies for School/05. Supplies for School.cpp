

#include <iostream>
using namespace std;

int main()
{
	int NumberOfPacketsChemicals;
	cin >> NumberOfPacketsChemicals;
	int NumberOfPacketsMarkers;
	cin>> NumberOfPacketsMarkers;
	int LitersOfChalkboardCleaner;
	cin >> LitersOfChalkboardCleaner;
	int PercentageReduction;
	cin >>PercentageReduction;

	double PricePacketsChemicals = 5.80;
	double PricePacketsMarkers = 7.20;
	double PriceChalkboardCleaner = 1.20; 
	//double PricePercentageReduction =  PercentageReduction / 100;
	//cout << PricePercentageReduction << endl;

	double PriceChemicals = NumberOfPacketsChemicals * PricePacketsChemicals;
	//cout << PriceChemicals << endl;
	double PriceMarkers = NumberOfPacketsMarkers * PricePacketsMarkers;
	//cout << PriceMarkers << endl;
	double PriceCleaner = LitersOfChalkboardCleaner * PriceChalkboardCleaner;
	//cout << PriceCleaner << endl;
	double Total = PriceChemicals + PriceMarkers + PriceCleaner;
	//cout << Total << endl;
	double TotalReduction = Total - ((Total * PercentageReduction)/100);
	
	cout << TotalReduction;
}

