#include <stdio.h>
int main ()
{
	float frh,cel;
	printf("give farnheit ");
	scanf("%f",&frh);
	cel=(frh-32)*5/9;
	printf("%f",cel);
	return 0;
}
