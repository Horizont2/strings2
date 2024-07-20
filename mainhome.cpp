#include <iostream>
#include "mystring.h"

using namespace std;

int main() {
    // Тестування mystrlen
    const char *str = "Hello, world!";
    cout << "Length of string: " << mystrlen(str) << endl;

    // Тестування mystrcpy
    char buffer[50];
    mystrcpy(buffer, str);
    cout << "Copied string: " << buffer << endl;

    // Тестування mystrcat
    char str1[50] = "Hello";
    const char *str2 = ", world!";
    mystrcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // Тестування mystrchr
    char ch = 'o';
    char *pos = mystrchr(str1, ch);
    if (pos) {
        cout << "Character '" << ch << "' found at position: " << (pos - str1) << endl;
    } else {
        cout << "Character '" << ch << "' not found." << endl;
    }

    // Тестування mystrstr
    const char *substr = "world";
    char *substr_pos = mystrstr(str1, substr);
    if (substr_pos) {
        cout << "Substring '" << substr << "' found at position: " << (substr_pos - str1) << endl;
    } else {
        cout << "Substring '" << substr << "' not found." << endl;
    }

    // Тестування mystrcmp
    const char *str3 = "Hello, world!";
    const char *str4 = "Hello, C++!";
    cout << "String comparison (equal strings): " << mystrcmp(str3, str) << endl;
    cout << "String comparison (different strings): " << mystrcmp(str3, str4) << endl;

    // Тестування StringToNumber
    char numberStr[] = "12345";
    cout << "String to number: " << StringToNumber(numberStr) << endl;

    // Тестування NumberToString
    int number = 54321;
    cout << "Number to string: " << NumberToString(number) << endl;

    // Тестування Uppercase
    char uppercaseStr[] = "Hello, world!";
    cout << "Uppercase: " << Uppercase(uppercaseStr) << endl;

    // Тестування Lowercase
    char lowercaseStr[] = "Hello, WORLD!";
    cout << "Lowercase: " << Lowercase(lowercaseStr) << endl;

    // Тестування mystrrev
    char revStr[] = "Hello, world!";
    cout << "Reversed string: " << mystrrev(revStr) << endl;

    return 0;
}
