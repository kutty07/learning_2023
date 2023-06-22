
#include <stdio.h>
#include <string.h>

void find(int num) {
    int maxNum = 0;
    char strNum[5];
    sprintf(strNum, "%d", num);  // Convert the number to a string

    for (int i = 0; i < 4; i++) {
        char tempStr[4];
        int tempNum = 0;

        // Copy the string without the current digit
        strncpy(tempStr, strNum, i);
        strncpy(tempStr + i, strNum + i + 1, 3 - i);

        // Convert the modified string back to a number
        sscanf(tempStr, "%d", &tempNum);

        if (tempNum > maxNum) {
            maxNum = tempNum;
        }
    }
    printf("\nThe largest o. is: %d\n",maxNum);

}
int main()
{
    int n;
    printf("\nEnter any 4 digit number: ");
    scanf("%d",&n);
    
    find(n);
    
    return 0;
}
