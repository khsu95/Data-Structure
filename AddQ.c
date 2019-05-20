#include "define_LL.h"
#include "insert_LL.h"
#include "Deleted_LL.h"
#include "DeletedAll_LL.h"
#include <stdio.h>

int main(void)
{
	init_list();
	int item;
	while(1)
	{
		printf("Type your item added \n");
		scanf("%d", &item);
		if(item==NULL)	break;
		rear=insert(item, rear);
	}

	printf("%d ", Deleted_LL(front));

	DeleteAll_LL();
	
	init_list();
}
