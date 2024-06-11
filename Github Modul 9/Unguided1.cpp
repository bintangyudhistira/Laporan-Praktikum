#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int jml_2311102052;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jml_2311102052;
    string simpul[jml_2311102052];
    int busur[jml_2311102052][jml_2311102052];
    for (int i = 0; i < jml_2311102052; i++)
    {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }
    for (int i = 0; i < jml_2311102052; i++)
    {
        for (int j = 0; j < jml_2311102052; j++)
        {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }
    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jml_2311102052; i++)
    {
        cout << setw(15) << simpul[i];
    }
    cout << endl;
    for (int i = 0; i < jml_2311102052; i++)
    {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jml_2311102052; j++)
        {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }
    return 0;
}