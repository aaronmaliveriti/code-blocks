#include <iostream>

using namespace std;

int main()
{
    string car [5] = {"Audi", "Mercedes-Benz", "Ferrari", "Lexus", "Peugeot"};
    string model [5] = {"R8, RS8, A3, A5, A6", "AMG, GLS, CLE, CLS", "Enzo, F40, LaFerrari, Pista, SF90 Stradale"
    , "RX, UX, LBX, NX, LM", "3008, 308, 5008, 2006, 206"};

    for(int i = 0;i<5;i++){
        cout << "Brand: " << car[i] << " ------- Modeli: " << model[i] << endl;
    }


    return 0;
}
