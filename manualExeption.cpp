#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw string("Kesalahan"); // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...)
    {
        // ini akan dieksekusi jika tidak ada pengecualian yang sesuai
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }

    return 0;
}