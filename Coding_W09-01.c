#include <stdio.h>

int main() {
    int start, stop;

    while (1) {
        // รับค่าจากผู้ใช้
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);

        // ตรวจสอบเงื่อนไข
        if (start < stop) {
            // แสดงลำดับตัวเลข
            printf("Start number is %d and stop number is %d\n", start, stop);
            printf("-------------\n");
            printf("Sequence from start to stop: ");
            for (int i = start; i <= stop; i++) {
                printf("%d ", i);
            }
            printf("\nThank you.\n");
            break; // ออกจากลูปเมื่อทำงานเสร็จ
        } 
        else if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n\n");
        } 
        else {
            printf("Your Start number is greater than Stop number, please try again!\n\n");
        }
    }

    return 0;
}
