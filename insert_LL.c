node *insert(int item, node *Before_NN)
{
	node *NN;//new node
	NN = (node *)malloc(sizeof(node));
	NN->key=item;
	NN->next = Before_NN->next;
	Before_NN->next = NN;

	return NN;
}
