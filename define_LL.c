typedef struct _node{
	int key;
	struct _node *next;
}node;

node *head, *tail;

//initial

void init_list(void)
{
	head=(node*)malloc(sizeof(node));
	tail=(node*)malloc(sizeof(node));
	head->next=tail;
	tail->next=tail;
}
