node *Find_LL(int Be_Finded)
{
	node *temp;
	temp = head->next;

	while(temp->item !=Be_Finded && temp != tail)
		temp=temp->next;
	return temp;
}
