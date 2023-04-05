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
	   printf("太瘦\n");
	if(bmi>18.5&&bmi<24.9)
	   printf("标准\n") ;
	if(bmi>25&&bmi<29.9)
        printf("偏重\n") ;
	if(bmi>30)
	   printf("超重\n") ;
	return 0;
}

