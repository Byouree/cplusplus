#include <iostream>

#define _CRT_SECURE_WARNINGS

using namespace std;

int main() {

    char c;

    double val;



    while ((c = cin.get()) != '\n') {

        if (isdigit(c)) {

            cin.putback(c);

            cin >> val;

            cout << val << " ";
            

        }

    }

}
