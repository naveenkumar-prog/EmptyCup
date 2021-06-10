#include<stdio.h>

void main()
{
	int i=0,j=0;
	float dx=0,dy=0;
	float x[5],y[5],m[2],c[2];
	for(j=1;j<=2;j++)
	{
		printf("\nEnter the Line %d coordinates\n",j);
		for(i=1;i<=2;i++)
		{
			printf("Enter the x %d point :",i);
			scanf("%f",&x[i]);
			printf("Enter the y %d point :",i);
			scanf("%f",&y[i]);	
		}
		dx=x[2]-x[1];
		dy=y[2]-y[1];
		m[j]=dy / dx;
		printf("\nSlope for the Line %d is %.2f\n",j,m[j]);  // slope
		c[j]=y[1]-(m[j]*x[1]);
		printf("Intersect for the Line %d is %.2f\n",j,c[j]);  // intercept

	}
	
	if(m[1]-m[2] == 0)
	{
		printf("\nThere is no intersection");
	}
	else
	{
		float intersect_x = (c[2]-c[1])/(m[1]-m[2]);
		float intersect_y = m[1] * (intersect_x+ c[1]);
		
		printf("\nIntersecting Point is (%.2f, %.2f)",intersect_x,intersect_y);
 	}

}
