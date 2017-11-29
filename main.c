#ifndef TEST
#define TEST
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#endif

int main()
{
	int input;
	newList();
	scanf("%d",&input);

	while(input > 0)
	{

		addNode(input);
		scanf("%d",&input);

	}

	prettyPrint();

	exit(0);
}
