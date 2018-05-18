#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926f    //定義PI 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r,area;
	printf("輸入半徑：");
	scanf("%f",&r);
	area=PI*r*r;
	printf("面積為：%f",area);
}
