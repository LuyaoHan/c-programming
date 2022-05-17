

#include <stdint.h>

struct Node 
{
	struct Node* left_child;
	struct Node* right_child;
};

struct BST
{
  struct Node* root;
	void (* BST_insert)(struct BST* tree, uint8_t data);

};


void BST_insert(struct BST* tree, uint8_t data)
{
}


void main() 
{

}
