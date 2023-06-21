// Volume and surface area code

#include <stdio.h>

struct box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct box* boxPtr) {
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    return volume;
}

double calculateSurfaceArea(struct box* boxPtr) {
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    return surfaceArea;
}

int main() {
    struct box myBox;
    myBox.length = 3.0;
    myBox.width = 3.0;
    myBox.height = 5.0;

    struct box* boxPtr = &myBox;

    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
