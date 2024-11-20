#include<stdio.h>
int main(){
	float dodaicanh, chieucao, dientich;
	
	printf("nhap chieu cao cua tam giac: ");
	scanf("%f", &chieucao);
	printf("nhap do dai canh cua tam giac: ");
	scanf("%f", &dodaicanh);
	
	dientich = (dodaicanh * chieucao) / 2; 
	
	printf("dien tich cua tam giac la: %f", dientich);
	
	return 0;
	
}
