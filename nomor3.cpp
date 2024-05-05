#include <iostream>
#include <string>
using namespace std;

main() {
    int num, result;
    cin >> num;
    string strnum = to_string(num);
    for(int i = 0; i < strnum.size(); i++){
            int digit = strnum[i] - '0';
            if((digit == 2 || digit == 3 || digit == 5 || digit == 7)){
                result += digit;
            }
    }
cout << result;
}
