node *DeleteAll_LL(void)
{
	node *temp, *lead;
	lead = head->next;

	while(lead!=tail)
	{
		temp=lead;
		lead = lead->next;
		printf("%d ", temp->item);
		free(temp);
	}
	head->next=tail;
	return head;
}
