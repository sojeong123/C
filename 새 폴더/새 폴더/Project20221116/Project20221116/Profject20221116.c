����Ž��1/4
Ž��(��ȯ)

if (key == node->key)return node;
else if (key < node->key)
		return search(node->left, key);
else
	return search(node->rihgt, key);

Ž��(�ݺ�)
////////////////////
TreeNode *serach(TreeNode *node, int key)
////////////////////

while (node != NULL) {
	if (key == node->key)return node;
	else if (key < node->key)
		node = node->left;
	else
		node = node->right;

///////////
}
	return NULL;
}
///////
