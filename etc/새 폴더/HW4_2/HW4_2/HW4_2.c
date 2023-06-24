///////////////컴퓨터학과 20201012 임소정///////////////
#include <stdio.h>
#include <stdlib.h>
#define MAX_TREE_SIZE 20
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

typedef int element;
typedef struct TreeNode {
    element key;
    struct TreeNode* left, * right;
} TreeNode;

TreeNode* search(TreeNode* node, element key)
{
    if (node == NULL) return NULL;
    if (key == node->key) return node;
    else if (key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}

TreeNode* new_node(element item)
{
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode* insert_node(TreeNode* node, element key)
{
    if (node == NULL) return new_node(key);

    if (key < node->key)
        node->left = insert_node(node->left, key);
    else if (key > node->key)
        node->right = insert_node(node->right, key);

    return node;
}

TreeNode* min_value_node(TreeNode* node)
{
    TreeNode* current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}

TreeNode* delete_node(TreeNode* root, element key)
{
    if (root == NULL) return root;

    if (key < root->key)
        root->left = delete_node(root->left, key);
    else if (key > root->key)
        root->right = delete_node(root->right, key);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        TreeNode* temp = min_value_node(root->right);

        root->key = temp->key;
        root->right = delete_node(root->right, temp->key);
    }
    return root;
}

void preorder(TreeNode* root) {
    if (root) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}






int get_height(TreeNode* root) {
    int height = 0;

    if (root != NULL) {
        height = 1 + max(get_height(root->left), get_height(root->right));
    }

    return height;
}

int get_node(TreeNode* root) {
    int count = 0;
    if (root != NULL) {
        count = 1 + get_node(root->left) + get_node(root->right);
    }
    return count;
}

int get_max(TreeNode* root) {
    TreeNode* tmp = root;

    while (tmp->right != NULL) {
        tmp = tmp->right;
    }
    return tmp->key;
}

int get_min(TreeNode* root) {
    TreeNode* tmp = root;

    while (tmp->left != NULL) {
        tmp = tmp->left;
    }
    return tmp->key;
}

int main(void)
{
    TreeNode* root = NULL;
    char res;
    int value;

    printf("Enter i<nsert>,d<elete>,s<earch>,p<rint>,h<eight>,c<ount>,m<ax>,n<min>,q<uit>:");
    scanf("%c", &res);

    while (res != 'q') {
        switch (res) {
        case 'i':
            printf("삽입할 key값 입력:");
            scanf_s("%d", &value);
            root = insert_node(root, value);
            break;
        case 'd':
            printf("삭제할 key값 입력:");
            scanf_s("%d", &value);
            root = delete_node(root, value);
            break;

        case 's':
            printf("탐색할 key값 입력:");
            scanf_s("%d", &value);
            if (search(root, value) == NULL)
                printf("없음\n");
            else
                printf("있음\n");
            break;

        case 'p':
            preorder(root);
            printf("\n");
            break;

        case 'h':
            printf("트리의 높이는 %d\n", get_height(root));
            break;

        case 'c':
            printf("노드의 개수는 %d\n", get_node(root));
            break;

        case 'm':
            printf("가장 큰 값은 %d\n", get_max(root));
            break;

        case 'n':
            printf("가장 작은 값은 %d\n", get_min(root));
            break;

        default:
            break;
        }
    fflush(stdin);
        printf("Enter i<nsert>,d<elete>,s<earch>,p<rint>,h<eight>,c<ount>,m<ax>,n<min>,q<uit>:");
        scanf("%c", &res);
        
    }

    return 0;
}