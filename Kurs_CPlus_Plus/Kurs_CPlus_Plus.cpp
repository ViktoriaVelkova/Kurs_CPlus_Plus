

#include <iostream>
using namespace std;

int main()
{
    string nameofArct;
    cin >> nameofArct;
    int brProject;
    cin >> brProject;
    int timeofProject = brProject * 3;

    cout << "The architect " << nameofArct << " will need " << timeofProject <<
        " hours to complete "<<brProject<<" project/s.";
    
    return 0;
}

