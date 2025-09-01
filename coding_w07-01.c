#include <stdio.h>

int main() {
    float score, totalScore;

    // รับค่าคะแนนสอบ midterm จากผู้ใช้
    printf("Enter midterm score: ");
    scanf("%f", &score);

    totalScore = score;

    // ถ้าคะแนนมากกว่า 50 ให้บวกเพิ่มอีก 5%
    if (score > 50) {
        totalScore = score + (score * 0.05);
    }

    // แสดงผลคะแนนรวมสุดท้าย
    printf("Total score = %.2f\n", totalScore);

    // แสดงข้อความสิ้นสุด
    printf("End of evaluation\n");

    return 0;
}
