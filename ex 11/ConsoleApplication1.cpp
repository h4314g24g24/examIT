#include <iostream>
#include <cmath>
#include <Windows.h>
#include <algorithm>

using namespace std;


int main() {
    
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    
    const int ряди = 22;
    const int колона = 2;



    int masiv[ряди][колона];

   
    cout << "елементи масиву:" << endl;
    for (int i = 0; i < ряди; ++i) {
        for (int j = 0; j < колона; ++j) {
            cin >> masiv[i][j];
        }
    }

    for (int i = 0; i < ряди; ++i) {
        for (int j = 0; j < колона; ++j) {
            cout << masiv[i][j] << " ";
        }
            cout << endl;
        
    return 0;
}
        //Відсортувати масив -
       






























