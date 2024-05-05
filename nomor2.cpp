#include <iostream>
#include <cctype>
using namespace std;

main() {
    string input;
    getline(cin, input);
    for(int i = 0; i < input.length(); i++){
        input[i] = toupper(input[i]);
    }
    cout << input;
}
