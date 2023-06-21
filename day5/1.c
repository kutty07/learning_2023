#include <stdio.h>

void toggleCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        } else if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        else
            *str=*str;
            
        str++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf( "%s",str);
    
    printf("Original string: %s\n", str);
    
    toggleCase(str);
    printf("Toggled string: %s\n", str);
    
    return 0;
}
