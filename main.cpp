#include <iostream>
using namespace std;
int main() {
    unsigned long long mona,cont;
    cout << "inserire il numero di mona:";
    cin >> mona;
    cont = 0;
    do {
        cout << "mona" << endl;
        cont++;
    }while(cont<mona);
    return 0;
}
