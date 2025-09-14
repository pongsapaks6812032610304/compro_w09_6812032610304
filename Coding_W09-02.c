#include <stdio.h>

int main() {
    int sum, p, x, y;
    sum = 0;

    // วนลูปโดย x เริ่มจาก 1 และ y เริ่มจาก 1
    for (x = 1, y = 1; x * y <= 15; x++, y += 2) {
        p = x * y;          // คำนวณค่า p
        sum = sum + p;      // บวกค่า p เข้าไปใน sum
        printf("%d * %d = %d\n", x, y, p); // แสดงค่าในแต่ละรอบ
    }

    printf("Summation of x * y = %d\n", sum); // แสดงผลรวมทั้งหมด
    return 0;
}
