#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

double fact(double N){
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

double funcN1(double x, ofstream& fout){
    cout.setf(ios_base::fixed);
    double func = 0.0;
    cout << "Sum of row: ";
    for(double n = 0.0; n != 3 ; n+=1.0){
        func = func + ((pow(-1, n) * pow(x, 2 * n)) / (fact(2 * n)));
        cout << setprecision(4) << func << " " ;
        fout << setprecision(4) << func << " " ;
    }
}

double funcN4(double x, ofstream& fout){
    cout.setf(ios_base::fixed);
    double func = 0.0;
    cout << "Sum of row: ";
    for(double n =1; n != 4; n+=1.0){
        func = func + ((pow(x-1,n))/(n*pow(x,n)));
        cout << setprecision(4) <<  func << " " ;
        fout << setprecision(4) <<  func << " " ;

    }

}

int main() {
    double cosinus, ln;
    int numberfunc;
    cout << "4 or 1";
    cin >> numberfunc;
    if (numberfunc == 1) {
        std::ofstream ofs;
        ofstream fout;
        fout.open ("function1.txt");
        for (double x = 0.0; x <= 1.0; x += 0.1) {
            cosinus = (cos(x));
            cout << endl << "cos: " << cosinus << " " << "x: " << x << endl;
            fout << endl << "cos: " << cosinus << " " << "x: " << x << endl;
            funcN1(x, fout);
        }
        fout.close();
    } else {
        std::ofstream ofs;
        ofstream fout;
        fout.open ("function2.txt");
        for (double x = 0.1; x <= 1.0; x += 0.1) {
            ln = log(x);
            cout << endl << "ln: " << ln << " " << "x: " << x << endl;
            fout << endl << "ln: " << ln << " " << "x: " << x << endl;
            funcN4(x, fout);
        }
        fout.close();

        return 0;
    }

}

