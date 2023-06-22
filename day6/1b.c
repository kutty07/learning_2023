#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    double face1 = box->length * box->width;
    double face2 = box->width * box->height;
    double face3 = box->height * box->length;
    
    return 2 * (face1 + face2 + face3);
}

int main() {
    struct Box myBox;  
    struct Box* boxPtr;  
    
    boxPtr = &myBox;  
    
    printf("Enter the length of the box: ");
    scanf("%lf",&boxPtr->length);
    
    printf("Enter the width of the box: ");
    scanf("%lf",&boxPtr->width);
    
    printf("Enter the height of the box: ");
    scanf("%lf",&boxPtr->height);
    

    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}
