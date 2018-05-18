#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926f    //定義PI 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  //無返回值類型
	float r,area;//定義兩個浮點型變量
	printf("輸入半徑：");//友情提示
	scanf("%f",&r);//接收用戶輸入數據
	area=PI*r*r; //開始計算
	printf("面積為：%f",area);//得出結果
}
