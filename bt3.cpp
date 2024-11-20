#include<stdio.h>

int main(){
	float PI = 3.14, R;
	printf("nhap ban kinh hinh tron: ");
	scanf("%f", &R);
	float chuvi = 2 * PI * R;
	float dientich = PI * R * R;
	
	printf("ban kinh hinh tron la: %f", R);
	printf("chu vi hinh tron la: %.2f\n", chuvi);
	printf("dien tich hinh tron la: %.2f\n", dientich);
	
	return 0;
	


}
