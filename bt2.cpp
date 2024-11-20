#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("nhap vao nhiet do theo he celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("nhiet do chuyen tu celsius sang fahrenheit la: %.2f\n", fahrenheit);
	return 0;
	
	}
