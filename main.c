#include <stdio.h>
#include "xyz.h"
int main() {
	char a[100], ch;
	printf("For normal operation enter the operator \n");
	printf("For special functions press following numbers and letters\n");
	printf("1 = tan inverse\n2 = sin function\n3 = cos function\n4 = to find sine hyperbolic\n5 = to find cosine hyperbolic value\n6 = decimal to binary conversion\n7 = decimal to hexadecimal conversion\n8 = decimal to octal conversion\nA = to find matrix addition\nB = to find matrix multiplication\nC = to find matrix subtraction\nD = to find matrix inverse\nE = to find determinant of 3 by 3 matrix\nF = to find transpose of matrix\nG = to find matrix is symmetric or not\nI = to find radian conversion of degree angle\n");
	while(1) {
		ch = getchar();
		switch(ch) {
			case '+':
				addition();
				break;
			case '-':
				subtraction(); 
				break;
			case '*':
				multiplication();
				break;
			case '/':
				division();
				break;
			case 'A':
				matadd();
				break;
			case 'B':
				matmul();
				break;
			case 'C':
				matsub();
				break;
			case 'D':
				deter();
				break;
			case 'E':
				trans();
				break;
			case 'F':
				symmetry();
				break;
			default:
				printf("You have entered unknown operation\n");
				break;
		}	
	}
}
/*This function do the addition of n numbers*/
void addition() {
	int n , num;
	int m = 0;
	int sum = 0;
	printf("Enter the number of terms which are to bo added\n");
	scanf("%d", &n);
	printf("Enter the %d elements one by one\n", num);
	while(m < n) {
		scanf("%d", &num);
		sum = sum + num;
		m++;
	}
	printf("The sum of numbers is %d \n", sum);
}
/*THis function make the subtraction of two numbers*/
void subtraction() {
	float p, q;
	printf("Enter the two numbers to sutract\n");
	scanf("%f%f", &p, &q);
	float sub;
	sub = p - q;
	printf("The subtraction is %f\n", sub);
}
/*This function make the multiplication of n numbers*/
void multiplication() {
	float mul = 1.0;
	int x, y = 0;
	float numb;
	printf("Enter the number of terms to be multiplied\n");
	scanf("%d", &x);
	printf("Enter the numbers one by one\n");
	while(y < x) {
		scanf("%f", &numb);
		mul = mul * numb;
		y++;
	}
	printf("The multiplication is %f\n", mul);
}
/*This function makes the division of two numbers*/
void division() {
	float j, k;
	float div;
	printf("Enter the two numbers to calculate division\n");
	scanf("%f%f", &j, &k);
	div = j / k;
	printf("The division is %f\n", div);
}

