#include <stdio.h>
#include "utility.h"


typedef struct  Gym 
{
	int start;
	int end;
}Gym;

Gym times[] =
{
	 {420, 480},{480,  600}, { 555,  620}, {660, 735},   
	 {741, 825},{795,945},{1170,1320}, {1260,1380}
};




void printGym(const Gym gym) { 
	char buf[100];
	
	sprintf(buf,"Nearest Time Sport Class...\tStart Time: %d:%.2d%cm\tEndTime: %d:%.2d%cm",
		gym.start / 60 > 12 ? gym.start/60 - 12 : gym.start / 60,
		gym.start % 60,
		gym.start > 719 ? 'p' : 'a',
		gym.end / 60 >= 12 ? gym.end/60 - 12 : gym.end / 60,
		gym.end % 60,
		gym.end > 719 ? 'p' : 'a'
		);
	puts(buf);
}

		
 //Nearest Time Sport Class.... Start:	07:00am    End Time: 08:00am      

int main(void) 
{
	
	int hour, min;
	int totalMin;
	printf("Enter 24 hour times:");
	scanf("%d:%d", &hour, &min);
	totalMin = hour * 60 + min;
	
	size_t i;
	for (i = 0; i < asize(times); ++i)
	{ 
		
		if (totalMin < times[i].start + (times[i].end - times[i].start) / 2)  
		{
			printGym(times[i]);
			break;
		}
		
	}
	
	if (i == asize(times))
		printGym(times[0]);
	
	
}