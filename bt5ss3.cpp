#include <stdio.h>
int main() {
    int num;

   printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &num);
    if (num < 1000 && num > 9999) {
        printf("So nhap vao khong phai la so co 4 chu so!\n");
        return 1; 
    }
    int sodaonguoc = 0;
    int sogoc = num;

    while (num > 0) {
        int chuso = num % 10;        
        sodaonguoc = sodaonguoc * 10 + chuso; 
        num /= 10;                  
    }

    
   printf("So  dao nguoc cua %d  la: %d", sogoc, sodaonguoc);

    return 0;
}
