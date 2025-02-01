#include <stdio.h>

char* Reverse(char* str, int len) {
    int temp;
    int i;
    for (i = 0; i < len / 2; i++) {
        temp = str[len - 1 - i];  // Use correct index for swapping
        str[len - 1 - i] = str[i];
        str[i] = temp;
    }
    return str;
}

int main() {
    char str[] = "ABC";  // Use a modifiable array
    Reverse(str, 3);
    printf("%s\n", str);  // Use format specifier
    return 0;
}

