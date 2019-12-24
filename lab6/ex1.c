#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int day_diff(int year_start, int month_start, int day_start
	, int year_end, int month_end, int day_end)
{
	int y2, m2, d2;
	int y1, m1, d1;

	m1 = (month_start + 9) % 12;
	y1 = year_start - m1/10;
	d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);

	m2 = (month_end + 9) % 12;
	y2 = year_end - m2/10;
	d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (day_end - 1);

	return (d2 - d1+1);
}


int main(int argc, char* argv[])
{

	//printf("%d\n",argc);
	if (argc != 3) {
		printf("usage: 2019/10/02 2019/10/05 operator ...\n");
		return 1;
	}
	char *date1=argv[1];
	//printf("%s\n",date1);

	char *date2 = argv[2];
	//printf("%s\n",date2);

	char delims[] = "/";
	int *finaleResult = (int*)malloc(3*sizeof(int));
	char * result = NULL;
	result = strtok(date1,delims);
	int i = 0;
	while (result != NULL)
	{
		*(finaleResult+i) = atoi(result);
		result = strtok(NULL,delims);
		i++;
	}


	int year1 = finaleResult[0];
	int month1 = finaleResult[1];
	int day1 = finaleResult[2];
	//printf("%d\n",da);

	result = NULL;
	result = strtok(date2,delims);
	i = 0;
	while (result != NULL)
	{
		*(finaleResult+i) = atoi(result);
		result = strtok(NULL,delims);
		i++;
	}

	int year2 = finaleResult[0];
	int month2 = finaleResult[1];
	int day2 = finaleResult[2];

	//printf("%d\n%d\n%d\n",year2,month2,day2);


	printf("%d\n", day_diff(year1, month1, day1, year2, month2, day2));
	//printf("%d\n", day_diff(2015, 1, 29, 2015, 3, 9));

	free(finaleResult);
	return 0;
}
