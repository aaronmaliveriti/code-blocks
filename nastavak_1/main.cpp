#include <iostream>
#include <cmath>

using namespace std;
    double zbroj(double a, double b){
        double zbroj = a+b;
        cout << "Zbroj: " << zbroj << endl;
    }
    double razlika(double a, double b){
        double razlika = a-b;
        cout << "Razlika: " << razlika << endl;
    }
    double umnozak(double a, double b){
        double umnozak = a*b;
        cout << "Umnozak: " << umnozak << endl;
    }
    double kolicnik(double a, double b){
        double kolicnik = a/b;
        cout << "Kolicnik: " << kolicnik << endl;
    }

int main(){


    double a = 0;
    double b = 0;
    cin >> a;
    cin >> b;
    zbroj(a,b);
    razlika(a,b);
    umnozak(a,b);
    kolicnik(a,b);
/*

    int c = 0;
    cin >> c;
    if (c>100 || c<-100){
        cout << "Broj nije zadovoljen." << endl;
        cin >> c;
    }
    if (c%2==0){
        cout << "Broj je paran." << endl;

    }
    else cout << "Broj je neparan." << endl;

    if(c<0){
        int cc = c * (-1);
        cout << "Apsolutna vrijednost broja je: " << cc << endl;
    }
    else cout << "Apsolutna vrijednost broja je: " << c << endl;
    int kvadrat = c*c;
    cout << "Kvadrat ovog broja je " << kvadrat << endl;




    double x1,x2,y1,y2;
    cout << "Unesi koordinate prve tocke: " << endl;
    cin >> x1;
    cin >> y1;
    cout << "Unesi koordinate druge tocke: " << endl;
    cin >> x2;
    cin >> y2;

    double kvadrat = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << "Udaljenost izmedu tocaka: " << kvadrat << endl;



    double d;
    double e;
    cout << "Unesi ostvareni broj bodova: " << endl;
    cin >> d;
    cout << "Unesi maksimalni broj bodova: " << endl;
    cin >> e;
    if (d>e){
        cout << "Invalidan zapis." << endl;
    }
    double postotak = 100*(d/e);
    int f = 0;
    if (postotak < 50){
        f = 1;
    }
    if (postotak >= 50 && postotak <65){
        f = 2;
    }
    if (postotak >= 65 && postotak <80){
        f = 3;
    }
    if (postotak >= 80 && postotak <90){
        f = 4;
    }
    if (postotak > 90){
        f = f;
    }

    cout << "Bodovi: " << d << "/" << e << endl;
    cout << "Postotak :" << postotak << "%" <<  endl;
    cout << "Ocjena :" << f << endl;

    */

    return 0;
}
