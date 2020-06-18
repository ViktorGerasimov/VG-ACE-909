#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string temp, str;
    char sStr[100] = "string", *word;
    cin.getline(sStr, 100);
    cout << endl;
    cout << sStr << endl;
    word = strtok(sStr, " ");
    while (word != 0)
    {
        temp = word;
        str = word;
        reverse(str.begin(), str.end());
        if (str != temp)
            printf("%s ", str.c_str());
        word = strtok(0, " ");
    }
    getchar();
}
