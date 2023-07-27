#include <iostream>
#include "logic.cpp"
using namespace std;

int main(){

    cout << "Cybercafe\n";
    cout << "1. pesan\n2. keluar";
    string a;
    cout << "\n";
    cin >> a;
    if (a == "1"){
        makanan();
        minuman();
        logic();
    }
    else if(a=="2")
    {
        cout << "Sampai Jumpa";
        exit(0);
    }
    else
    {
        cout << "Unknown option\n\n";
        main();
    }
    return(0);
}