#include <iostream> 
#include <cctype> 
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "russia");
    int count = 0;
    char first[255];
    cin >> first;

    while (first[count])
    {
        if (isalpha(first[count]))
            cout << "Символ " << first[count] << " - буква" << endl;
        else
            cout << "Символ " << first[count] << " - Цифра" << endl;
        count++;
    }
    return 0;

}