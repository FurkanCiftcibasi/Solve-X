#include <iostream>
using namespace std;

int awnser1 = 10, awnser2 = 5, correct = 2, input;

int main() {

    cout << "a + b + X = 17\n";
    cout << "a = " << awnser1 << "\n" ;
    cout << "b = " << awnser2 << "\n" ;
    cout << "Solve X\n" ; 
    cin >> input;


        if (input == correct){
        cout << "you passed\n";
        return 0; 
        }

    else (input != correct);
    {
        cout << "you failed\n";
        return 0;
    }
}

