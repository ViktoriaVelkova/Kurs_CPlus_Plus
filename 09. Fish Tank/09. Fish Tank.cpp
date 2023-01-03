/*Вход		
85
75
47
17	

 Изход 248.68875	
обем на аквариумa: 85 * 75 * 47 = 299625 см3
обем в литри: 299625 * 0.001 или  299625 / 1000 => 299.625 литра
заето пространство: 17% = 0.17
нужни литри: 299.625 * (1 - 0.17) = 248.68875 литра
*/

#include <iostream>
using namespace std;
//50/100?
int main()
{
    int dyljina; cin >> dyljina;
    int shirina; cin >> shirina;
    int visochina; cin >> visochina;
    int procent; cin >> procent;
    int zaetoProstranstvo = 17;//17%

    double ObemSM = dyljina * shirina * visochina;
    //cout << ObemSM << endl;
    double ObemLItri = ObemSM / 1000;
    //cout << ObemLItri << endl;
    double NuvniLitri = ObemLItri * (1-0.17);
    cout << NuvniLitri << endl;
}


