#include <stdio.h>
#include <stdlib.h>

struct Books {
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books CBook);

int main() {
    printf("Enter Book ID : ");
    scanf("%d", &ComputerBook.BookID);

    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);

    DisplayData(ComputerBook);

    return 0;
}

void DisplayData(struct Books CBook) {
    printf("Book ID : %d \n", CBook.BookID);
    printf("Book Title : %s \n", CBook.BookTitle);
}
/*
void DisplayData(struct Books CBook) คือ: เป็นการประกาศ ฟังก์ชันต้นแบบและนิยามฟังก์ชัน ที่ทำหน้าที่รับข้อมูลประเภทโครงสร้างเข้ามาเพื่อนำไปแสดงผล โดยฟังก์ชันนี้ไม่มีการส่งค่ากลับ (void)
พารามิเตอร์ที่รับเข้ามา: คือตัวแปรชื่อ CBook ซึ่งมีชนิดข้อมูลเป็น struct Books โดยเป็นการรับค่าแบบ Pass by Value
*/

