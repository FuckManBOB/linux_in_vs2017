#include <cstdio>
#include <string.h>
#include <unistd.h>

#include "calc.h"


//data struct
typedef struct people
{
	int age;
	char sex;
	char addr[100];
}ST_PEOPLE;

//add function
int add(int x, int y)
{
	return x + y;
}

//sub function
int sub(int x, int y)
{
	return x - y;
}

//initPeople 
bool initPeople(ST_PEOPLE *people, int age, char sex, char *addr, unsigned int addrLen)
{
	if (addr == NULL)
	{
		return false;
	}

	people->age = age;

	people->sex = sex;

	strncpy(people->addr, addr, addrLen);

	return true;
}


char addr[10][3] = { "aa" , "bb", "cc", "dd", "ee", "ff", "xx", "cc", "vv", "bb" };
char mm[2][4] = { {"abc"}, {"def"} };

// mian run
int main()
{
	int sum = 0;
	int printCnt = 0;
	int addCnt = 0;
	int subCnt = 0;
	ST_PEOPLE peoples[10];

	sum = add(3, 4);

	printf("sum = %d\n",sum);

    printf("hello from linuxdemo!\n");
    
	sum = add(-1, 2);
	printf("sum = %d\n", sum);

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			initPeople(&peoples[i], 10 + i, 'M', addr[i], 3);
		}
		else
		{
			initPeople(&peoples[i], 10 + i, 'F', addr[i], 3);
		}
			
	}

	while (1)
	{
#if 0
		printf("printf now is %d\n", printCnt);
		printCnt++;
#endif
		calc_add(addCnt, addCnt + 1);
		addCnt++;

		calc_sub(subCnt + 1, subCnt);
		subCnt++;

		sleep(1);
	}


	return 0;
}