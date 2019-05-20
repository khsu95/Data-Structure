void print_LL(node *node)
{
	printf("\n");
	while(node!=tail)
	{
		printf("%-8d", node->item);
		node = node->next;
	}
}
