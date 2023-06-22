#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box myBox) {
    return (myBox.length) * (myBox.width) * (myBox.height);
}

double calculateSurfaceArea(struct Box myBox) {
    double face1 = (myBox.length) * (myBox.width);
    double face2 = (myBox.width) * (myBox.height);
    double face3 = (myBox.height) * (myBox.length);
    
    return 2 * (face1 + face2 + face3);
}

int main() {
    struct Box myBox;  
    
    printf("Enter the length of the box: ");
    scanf("%lf",&myBox.length);
    
    printf("Enter the width of the box: ");
    scanf("%lf",&myBox.width);
    
    printf("Enter the height of the box: ");
    scanf("%lf",&myBox.height);
    

    double volume = calculateVolume(myBox);
    double surfaceArea = calculateSurfaceArea(myBox);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}
