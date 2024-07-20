#include <iostream>
#include "mystring.h"

using namespace std;

int main() {
    const char *str = "Hello, world!";
    cout << "Length of string: " << mystrlen(str) << endl;

    char buffer[50];
    mystrcpy(buffer, str);
    cout << "Copied string: " << buffer << endl;

    char str1[50] = "Hello";
    const char *str2 = ", world!";
    mystrcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    char ch = 'o';
    char *pos = mystrchr(str1, ch);
    if (pos) {
        cout << "Character '" << ch << "' found at position: " << (pos - str1) << endl;
    } else {
        cout << "Character '" << ch << "' not found." << endl;
    }
    const char *substr = "world";
    char *substr_pos = mystrstr(str1, substr);
    if (substr_pos) {
        cout << "Substring '" << substr << "' found at position: " << (substr_pos - str1) << endl;
    } else {
        cout << "Substring '" << substr << "' not found." << endl;
    }

    return 0;
}
