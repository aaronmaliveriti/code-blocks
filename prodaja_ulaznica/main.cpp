#include <iostream>
#include <iomanip>

using namespace std;
int c = 1;
const double CIJENA_ULAZNICE = 5.0;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.10;
int ukupnoUlaznica = 0;
double ukupniPrihod = 0.0;

bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();

int main()
{
    cout << fixed << setprecision(2);

    for (int i = 1; i <= 3; i++)
    {
        int kolicina;

        cout << "Kupnja " << i
             << " - unesi broj ulaznica (1-30): ";
        cin >> kolicina;

        while (!ispravanUnos(kolicina))
        {
            cout << "Neispravan unos. Pokusaj ponovno: ";
            cin >> kolicina;
        }

        double iznos = izracunajIznos(kolicina);

        evidentirajKupnju(kolicina, iznos);

        ispisiKupnju(i, iznos);
    }

    ispisiSazetak();

    return 0;
}

bool ispravanUnos(int kolicina)
{
    if(kolicina >= 1 &&  kolicina <= 30)
        return true;
    else
        return false;
}
double izracunajIznos(int kolicina)
{
    double osnovniIznos = kolicina * CIJENA_ULAZNICE;
    double konacniIznos = osnovniIznos;

    if (kolicina >= PRAG_POPUSTA)
    {
        konacniIznos = osnovniIznos * (1 - STOPA_POPUSTA);
    }

    return konacniIznos;

}
void evidentirajKupnju(int kolicina, double iznos){
ukupnoUlaznica += kolicina;
ukupniPrihod += iznos;
}

void ispisiKupnju(int redniBroj, double iznos){
cout << "Kupnja " << redniBroj << ": "
     << iznos << " EUR" << endl;
}

void ispisiSazetak(){
cout << "\nUkupno prodanih ulaznica: "
     << ukupnoUlaznica << endl;

cout << "Ukupni prihod: "
     << ukupniPrihod << " EUR" << endl;
}
