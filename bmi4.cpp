#include<stdio.h>
int main() 
{
	 float weight;
	 float height;
	 float bmi;
	  printf("pleaae input the weight:");
	  scanf("%f", &weight);
	  printf("please input the height:");
	  scanf("%f", &height);
	bmi= weight / (height * height);
	   printf("your BMI is %f\n",bmi);
	if(bmi<18.5)
	   printf("̫��\n");
	if(bmi>18.5&&bmi<24.9)
	   printf("��׼\n") ;
	if(bmi>25&&bmi<29.9)
        printf("ƫ��\n") ;
	if(bmi>30)
	   printf("����\n") ;
	return 0;
}

