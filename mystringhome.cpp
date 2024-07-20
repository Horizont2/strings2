#include "mystring.h"
#include <cctype>
#include <cstdlib>
#include <algorithm>

int mystrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char *mystrcpy(char *str1, const char *str2) {
    char *start = str1;
    while ((*str1++ = *str2++) != '\0');
    return start;
}

char *mystrcat(char *str1, const char *str2) {
    char *start = str1;
    while (*str1) {
        str1++;
    }
    while ((*str1++ = *str2++) != '\0');
    return start;
}

char *mystrchr(char *str, char s) {
    while (*str) {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return nullptr;
}

char *mystrstr(char *str1, const char *str2) {
    if (!*str2) {
        return str1;
    }
    char *p1 = str1;
    while (*p1) {
        char *p1Begin = p1, *p2 = (char *)str2;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (!*p2) {
            return p1Begin;
        }
        p1 = p1Begin + 1;
    }
    return nullptr;
}

int mystrcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
int StringToNumber(char *str) {
    return std::atoi(str);
}

char *NumberToString(int number) {
    static char buffer[12];
    std::sprintf(buffer, "%d", number);
    return buffer;
}

char *Uppercase(char *str) {
    char *start = str;
    while (*str) {
        *str = std::toupper(*str);
        str++;
    }
    return start;
}

char *Lowercase(char *str) {
    char *start = str;
    while (*str) {
        *str = std::tolower(*str);
        str++;
    }
    return start;
}

char *mystrrev(char *str) {
    char *start = str;
    char *end = str + mystrlen(str) - 1;
    while (end > start) {
        std::swap(*start, *end);
        start++;
        end--;
    }
    return str;
}
