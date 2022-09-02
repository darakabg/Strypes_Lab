#include<stdio.h>

int main(){
	float vol,r,l;
	printf("r: ");
	scanf("%f",&r);
	printf("l: ");
	scanf("%f",&l);
   
	vol= (3.14*r*r*l);
	printf("Volume: %f\n",vol);
	return 0;
}

