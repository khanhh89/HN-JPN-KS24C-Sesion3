#include<stdio.h>
int main(){
	int numb, sum = 0; 
	printf("nhap so co bon chu so: ");
	scanf("%d", &numb);
	
	if(numb<1000||numb>9999){
		printf("so khong hop le, vui long nhap so co bon chu so \n");
		return 1;

	}else {
		sum += numb %10;
		numb /= 10;
		sum += numb %10;
		numb /= 10;
		sum += numb %10;
		numb /= 10;
		
		sum += numb ;
		
		printf("tong cac chu so da nhap la: %d\n", sum);
		
		
		
	}
	return 0;
}
