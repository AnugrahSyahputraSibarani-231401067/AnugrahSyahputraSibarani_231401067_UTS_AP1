#include <iostream> //#Include <Stdio.H>
#include <math.h> //#inlcude "math.h"
using namespace std; //tidak ada sebelumnya

int main() { //float main(void) {
    system("CLS"); //SYSTEM("CLS"):
    int n; //tidak ada sebelumnya

    cout << "Insert a number: ";
    cin >> n; //cin << n;

    if (n <= 1) { //if (n >= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 2; i <= sqrt(n); i++) { //for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) { //if (n % 1 == 2) {
                cout << n << " bukanlah bilangan prima."; //cout >> n << " bukanlah bilangan prima.";
                return 0;
            }
        }

        cout << n << " Merupakan bilangan prima."; //coute >> n << "Merupakan bilangan prima.";
    }

    //return 1;
}