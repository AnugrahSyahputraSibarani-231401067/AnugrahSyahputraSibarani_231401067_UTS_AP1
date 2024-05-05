#include <iostream>
using namespace std;

string zero(int input);

main(){
    int detik;
    rein:
    cin >> detik;
    if(detik < 0){
        cout << "Inputan harus bernilai positif" << endl;
        goto rein;
    }
    cout << zero(detik/3600) << ":" << zero((detik/60)%60) << ":" << zero(detik%60);
}

string zero(int input){
    return (input > 9 ? "" : "0") + to_string(input);
}
