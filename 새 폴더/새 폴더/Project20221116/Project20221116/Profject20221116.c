ÀÌÁøÅ½»ö1/4
Å½»ö(¼øÈ¯)

if (key == node->key)return node;
else if (key < node->key)
		return search(node->left, key);
else
	return search(node->rihgt, key);

Å½»ö(¹Ýº¹)
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
