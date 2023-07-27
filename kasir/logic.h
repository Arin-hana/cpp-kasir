#include <iostream>
using namespace std;
int ops1 = 5000;
int ops2 = 5000;
int ops3 = 3000;
int ops4 = 3000;
int ops5 = 3000;
int ops6 = 3000;
int ops7 = 4000;
int ops8 = 6000;
int jml;
extern int cp1, cp2, cp3, cp4, cp5, cp6, cp7, cp8;
extern void inverse();
extern void logic();
extern void makanan();
extern void minuman();
int but()
{
    makanan();
    minuman();
    inverse();
    return (0);
}
int butin(){
    makanan();
    minuman();
    logic();
    return (0);
}
int total(){
    cout << "\n";
    if (cp1>=1)
    {
        cout << "Pecel "<<cp1<<"\n";
    }
    if(cp2>=1)
    {
        cout << "Rawon "<<cp2<<"\n";
    }
    if (cp3 >= 1)
    {
        cout << "Mie Kuah " << cp3 << "\n";
    }
    if (cp4 >= 1)
    {
        cout << "Mie Goreng " << cp4 << "\n";
    }
    if (cp5 >= 1)
    {
        cout << "Kopi " << cp5 << "\n";
    }
    if (cp6 >= 1)
    {
        cout << "Es Teh " << cp6 << "\n";
    }
    if (cp7 >= 1)
    {
        cout << "Es Jeruk " << cp7 << "\n";
    }
    if (cp8 >= 1)
    {
        cout << "Es Jos " << cp8<< "\n";
    }
    jml = (ops1 * cp1) + (ops2 * cp2) + (ops3*cp3)+(ops4*cp4)+(ops5*cp5)+(ops6*cp6)+(ops7*cp7)+(ops8*cp8);
    cout << "\nTotal Pesanan adalah "<<jml<<endl;
    exit(0);
}