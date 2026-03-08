#include <stdio.h>
#include <stdlib.h>

struct Books {
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook);

int main() {
    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);

    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);

    DisplayData(&ComputerBook);

    return 0;
}

void DisplayData(struct Books *CBook) {
    printf("Book ID : %d \n", (*CBook).BookID);
    printf("Book Title : %s \n", CBook->BookTitle);
}
/*
*(CBook).BookID คือ:* การเข้าถึงสมาชิกภายใน Struct ผ่าน Pointer โดยใช้เครื่องหมาย * เพื่อเข้าถึงค่าในตำแหน่งที่ Pointer ชี้อยู่ก่อน แล้วจึงใช้จุด . เพื่อระบุชื่อตัวแปรที่ต้องการ (ต้องใส่เครื่องหมายวงเล็บครอบ *CBook ไว้เสมอเนื่องจากเครื่องหมายจุดมีลำดับความสำคัญสูงกว่า)
CBook->BookTitle คือ: การเข้าถึงสมาชิกภายใน Struct ผ่าน Pointer โดยใช้ตัวดำเนินการ Arrow Operator (->) ซึ่งเป็นวิธีที่สั้นและนิยมใช้กันมากกว่าการเขียนแบบแรก มีความหมายเหมือนกับ
*/

