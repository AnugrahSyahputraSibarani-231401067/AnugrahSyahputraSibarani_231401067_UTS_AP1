#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    for(char &each : input){
        each = toupper(each);
    }
    cout << input;
}
