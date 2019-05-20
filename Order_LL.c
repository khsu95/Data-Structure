//already ordered LL
node *ordered_insert(int k)
{
	node *small, *big, *r;
	small=head;
	big=small->next;

	while(big->key<=k && big!=tail)
	{
		small=small->next;
		big=big->next;
	}

	//insert new node
	r=(node*) malloc(sizeof(node));
	r->key = k;
	small->next=r;
	r->next=big;

	return r;
}
