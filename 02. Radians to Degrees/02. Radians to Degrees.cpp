

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double rad;
    cin >> rad;
    double pi = 3.14;
    double deg = (rad * 180)/pi;
    //4.	����������� ���������� �������, ���� ���������� ��������� ���� ����� 
   // (����������� ������ round()) :

    cout << round(deg) << endl;
}

