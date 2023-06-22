#include <stdio.h>

int stringToInt(const char* str) {
    int num = 0;
    int i = 0;


    while (str[i] != '\0') {
        
        int digit = str[i] - '0'; // Convert character to digit

        num = num * 10 + digit;

        i++;
    }

    return num;
}

int main() {
    char str[10];
    printf("Input string: ");
    scanf("%s",str);
    int num = stringToInt(str);
    printf("Integer value: %d\n", num);

    return 0;
}
