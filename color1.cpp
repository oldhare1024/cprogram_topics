#include<stdio.h>
enum{red,orange,yellow,green,blue,violet};
int main()
{
	int color;
	scanf("%d",&color);
	switch(color)
	{
		case(red):printf("Rose ar red.");break;
		case(orange):printf("Poppies are orange.");break; 
		case(yellow):printf("Sunflower are yellow.");break;
		case(green):printf("Grass are green.");break;
		case(blue):printf("Bluebells are blue.");break;
		case(violet):printf("Violets are violet.");break;
		default:printf("i don't know about the color purple.");break; 
	}
	return 0;
} 
