#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float h=0.000001;
	float x=0.5;
	float ans;
while(x>=0){
	ans=(pow((x+1),5)+-1)/(x);
	printf("\nf(%f)=%f ",x,ans);
	x=x-h;
	usleep(0.01);
	//system("sleep 0.0000001");

	}
	
}