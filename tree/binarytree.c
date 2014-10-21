//二叉树

//节点的建立
typedef struct node
{	
	int data;
	struct node * left_child;
	struct node * right_child;
}*tree_pointer;

//中序遍历二叉树 LVR
void inorder(tree_pointer ptr)
{
	if(ptr)
	{
		inorder(ptr->left_child);
		printf("%d",ptr->data);
		inorder(ptr->right_child);
	}
}


//先序遍历二叉树 VLR
void preorder(tree_pointer ptr)
{
	if(ptr)
	{
		printf("%d",ptr->data);
		preorder(ptr->left_child);
		preorder(ptr->right_child);
	}
}
	
//后续遍历二叉树  LRV
void postorder(tree_pointer ptr)
{
	if(ptr)
	{
		postorder(ptr->left_child);
		postorder(ptr->right_child);
		printf("%d",ptr->data);
	}

}
