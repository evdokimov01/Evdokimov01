#include <stdio.h> // printf()
#include <stdlib.h> //rand()
 
int main()
{
	#define days 31
	float coeff[days];
	
	#define coeff_lo 10.0f
	#define coeff_hi 50.0f
	
	for(int i = 0; i < days; i++)
    {
		coeff[i] = coeff_lo + ((coeff_hi - coeff_lo) * rand() / RAND_MAX);
    }	

	for(int i = 0; i < days; i++)
	{
		printf("% 6.2f", coeff[i]);
		if (i % 7 == 6) printf("\n");
	}
	if (days % 7 > 0) printf("\n");
	
	float cmin = coeff_hi;
	float cmax = coeff_lo;
	
	for(int i = 0; i < days; i++)
	{
		if(coeff[i] < cmin) cmin = coeff[i];
		if(coeff[i] > cmax) cmax = coeff[i];
	}
	
#define set_blue printf("\033[1;34m")
#define set_yellow printf("\033[1;33m")
#define set_default printf("\033[0m")

	printf("min = "); set_blue; printf ("%.2f\n", cmin); set_default;
	printf("max = "); set_yellow; printf ("%.2f\n", cmax); set_default;
	
	return 0;
}
