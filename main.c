#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point{
	int x;
	int y;
};

int main(void){
	struct point p1,p2;
	
	
	printf("input p1 coordinate(x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate(x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	double distance = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.x-p2.x));
	printf("distance: %1f", distance);
	
}
