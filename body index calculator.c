#include <stdio.h>

int main () {
double weight;
double height;

printf("body index calculator\n\n\n");

printf("enter your height :");
scanf("%lf", &height);

printf("enter your weight :");
scanf("%lf", &weight);

double result;

result= weight / (height*height);
printf("your body index: %lf\n", result);

if ( result>25) {
	printf("overweight");
}
else if( result>19 && result<25) {
	printf("healthy");
}
else if(result<19) {
	printf("skinny");
}


return 0;
}