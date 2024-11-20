#include<stdio.h>
int main(){
	float toan, van, anh, trungbinh;
	printf("nhap diem toan: ");
	scanf("%f", &toan);
	printf("nhap diem van: ");
	scanf("%f",&van);
	printf("nhap diem anh: ");
	scanf("%f", &anh);
	
	 trungbinh = (toan + anh + van) / 3;
	
	printf("diem trung binh la: %.2f\n", trungbinh);
	
	return 0;
}
