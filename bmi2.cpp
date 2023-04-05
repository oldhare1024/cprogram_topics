#include<stdio.h>
int main() 
{
	float BMI;
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
	printf("偏瘦");
	if(bmi>18.5&&bmi<24.9)
	printf("标准") ;
	if(bmi>25&&bmi<29.9
	)printf("偏重") ;
	if(bmi>30)
	printf("超重") ;
	return 0;
}


