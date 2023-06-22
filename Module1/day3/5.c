#include <stdio.h>

void smallest_largest_digit(int a[],int n){

    int digit, smallest = 9, largest = 0;

    for(int i=0;i<n;i++){
        if (a[i] < 9) {
            printf("Not Valid\n");
        }

        else{
            while (a[i] > 0) {
                int digit = a[i] % 10;
                if (digit <= smallest)
                    smallest = digit;
                if (digit >= largest)
                    largest = digit;
                a[i] /= 10;
            }
        
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
        }

    }

}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int a[n];
    for(int x=0;x<n;x++){
        scanf("%d",&a[x]);
    }

    smallest_largest_digit(a,n);

    return 0;
}
