#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double k = std::sqrt(81.0);
    std::cout << k << endl;
    double r = std::round(2.6);
    std::cout << r << endl;
    double l = std::log(2);
    std::cout << l << endl;

    int o [5] = {3,2,4,3,1};
    float prosjek = 0;
    float prosjel = 0;
    for(int i = 0;i<5;i++){
        prosjek = prosjek + o[i];
        prosjel++;
    }

    double proc = std::round(prosjek/prosjel);
    cout << proc;

    return 0;
}
