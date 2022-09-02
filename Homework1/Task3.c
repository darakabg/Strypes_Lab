#include<stdio.h>

int main(){
	float vol,r,h;
	printf("r: ");
	scanf("%f",&r);
	printf("l: ");
	scanf("%f",&h);
   
	vol= (3.14*r*r*h);
	printf("Volume: %f\n",vol);
	return 0;
}