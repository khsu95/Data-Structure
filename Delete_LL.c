int Delete_LL(node *Before_Be_Deleted)
{
	node *front;
	int item;

	if(Before_Be_Deleted->next == tail)
		return 0;
	front= Before_Be_Deleted -> next;
	item=fornt->item;
	free(Before_Be_Deleted);
	return item;	
}

