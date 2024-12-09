#include <stdio.h>

int main() {
   int number1, number2,number3;
   	printf("Moi ban nhap so thu nhat: ");
	   	scanf("%d", &number1);
	printf("Moi ban nhap so thu hai: ");
	    scanf("%d", &number2);
    printf("Moi ban nhap so thu ba: ");
	    scanf("%d", &number3);
	if ( number1 > number2 && number1 > number3 )
      printf("%d la so lon nhat.", number1);
   else if ( number2 > number1 && number2 > number3 )
      printf("%d la so lon nhat.", number2);
   else if ( number3 > number1 && number3 > number2 )
      printf("%d la so lon nhat.", number3);
   else   
      printf("Gia tri cua cac so la khong duy nhat");

   return 0;
}
