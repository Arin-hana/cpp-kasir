#include <iostream>
#include "logic.h"
using namespace std;
int cp1, cp2, cp3, cp4, cp5, cp6, cp7, cp8;
string in;
extern but();
extern butin();
extern total();

void minuman()
{
    cout << "######    MINUMAN    ######\n";
    cout << "\n";
    cout << "5. Kopi       :    Rp 3000 " << cp5 << "\n";
    cout << "6. Es Teh     :    Rp 3000 " << cp6<< "\n";
    cout << "7. Es Jeruk   :    Rp 4000 " << cp7 << "\n";
    cout << "8. Es Jos     :    Rp 6000 " << cp8 << "\n";
}
void makanan()
{
    cout << "######    MAKANAN   ######\n";
    cout << "\n";
    cout << "1. Pecel      :    Rp 5000 " << cp1 << "\n";
    cout << "2. Rawon      :    Rp 5000 " << cp2 << "\n";
    cout << "3. Mie kuah   :    Rp 3000 " << cp3 << "\n";
    cout << "4. Mie Goreng :    Rp 3000 " << cp4 << "\n";
}

void logic(){
    cout << "\n Tekan 'E' Jika Selesai \n Tekan 'W' Untuk Mengurangi Pesanan\n Tekan 'Q' Untuk Keluar\n";
    cin >> in;
    if(in=="1"){
        cp1++;
        makanan();
        minuman();
        logic();
    }
    else if(in=="2")
    {
        cp2++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "3")
    {
        cp3++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "4")
    {
        cp4++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "5")
    {
        cp5++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "6")
    {
        cp6++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "7")
    {
        cp7++;
        makanan();
        minuman();
        logic();
    }
    else if (in == "8")
    {
        cp8++;
        makanan();
        minuman();
        logic();
    }
    else if(in=="W"||in=="w")
    {
        but();
    }
    else if(in=="e"||in=="E")
    {
        cout << "Yakin Menyelesaikan Pesanan? : \n(Y)es     (N)o\n";
        cin >> in;
        if(in=="y"||in=="Y"){
            total();
        }
        else if (in=="n"||in=="N"){
            makanan();
            minuman();
            logic();
        }
    }
    else if(in=="q"||in=="Q")
    {
        cout << "Yakin Keluar? : \n(Y)es     (N)o\n";
        cin >> in;
        if (in == "y" || in == "Y")
        {
            exit(0);
        }
        else if (in == "n" || in == "N")
        {
            makanan();
            minuman();
            logic();
        }
    }
    else{
        makanan();
        minuman();
        logic();
    }
}
void inverse()
{
    cout << "\n Tekan 'E' Jika Selesai \n Tekan 'W' Untuk Menambah Pesanan\n Tekan 'Q' Untuk Keluar\n";
    cin >> in;
    if (in == "1")
    {
        if (!cp1<=0){
            cp1--;
            makanan();
            minuman();
            inverse();
        }
        else{
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "2")
    {
        if (!cp2 <= 0)
        {
            cp2--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "3")
    {
        if (!cp3 <= 0)
        {
            cp3--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "4")
    {
        if (!cp4 <= 0)
        {
            cp4--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "5")
    {
        if (!cp5 <= 0)
        {
            cp5--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "6")
    {
        if (!cp6 <= 0)
        {
            cp6--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "7")
    {
        if (!cp7 <= 0)
        {
            cp7--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if (in == "8")
    {
        if (!cp8 <= 0)
        {
            cp8--;
            makanan();
            minuman();
            inverse();
        }
        else
        {
            makanan();
            minuman();
            cout << "Pesanan tidak boleh kurang dari 0";
            inverse();
        }
    }
    else if(in=="w"||in=="W")
    {
        butin();
    }
    else if (in == "e" || in == "E")
    {
        cout << "Yakin Menyelesaikan Pesanan? : \n(Y)es     (N)o\n";
        cin >> in;
        if (in == "y" || in == "Y")
        {
            total();
        }
        else if (in == "n" || in == "N")
        {
            makanan();
            minuman();
            inverse();
        }
    }
    else if(in=="q"||in=="Q")
    {
        cout << "Yakin Keluar? : \n(Y)es     (N)o\n";
        cin >> in;
        if (in == "y" || in == "Y")
        {
            exit(0);
        }
        else if (in == "n" || in == "N")
        {
            makanan();
            minuman();
            inverse();
        }
    }

    if (cp1 < 0 || cp2 < 0 || cp3 < 0 || cp4 < 0 || cp5 < 0 || cp6 < 0 || cp7 < 0 || cp8 < 0)
    {
        makanan();
        minuman();
        cout << "\nPesanan Tidak Bisa Kurang Dari 0\n";
        inverse();
    }
    else{
        makanan();
        minuman();
        inverse();
    }
    
}