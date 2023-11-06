#include <stdio.h>

#define PI 3.14
#define CircleAreaX2(r) r*r*PI*2

int main(){
	
	float x = 23;
	
	x = CircleAreaX2(x);
	
	printf("Circle area is: %f", x);
	
	return 0;
}
