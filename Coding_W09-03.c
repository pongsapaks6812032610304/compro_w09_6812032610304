#include <stdio.h>

int main() {
    int i = 1;

    // ใช้ while loop แทน for + continue
    while (i <= 10) {
        if (i == 6) {
            i++;
            continue; // ข้ามเมื่อ i = 6
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}
