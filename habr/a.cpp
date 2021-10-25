#include <iostream>
using namespace std;
int max_level;
struct node{
    int data;
    node *left, *right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
struct BST{
    node *root;
    long long height;
    BST(){
        root = NULL;
        height = 0;
    }
    node *insert(node *_node, int data){
        if(_node == NULL){
            _node = new node(data);
            return _node;
        }
        if(data < _node->data){
            _node->left = insert(_node->left, data);
        }else if(data > _node->data){
            _node->right = insert(_node->right, data);
        }
        return _node;
    }
    void insert(int x){
         if (root == NULL)
        {
            root = new node(x);
        }
        else
            insert(root, x);
    }
    
    void inOrder(node *_node){
        if(_node == NULL)
            return;
        inOrder(_node->left);
        cout << _node->data << " ";
        inOrder(_node->right);
    }

    node *findMin(node *_node){
        while(_node->left != NULL)
            _node = _node->left;
        return _node;
    }

    node *findMax(node *_node){
        while(_node->right != NULL)
            _node = _node->right;
        return _node;
    }

    node *deleteNode(node *_node, int data){
        if(_node== NULL)
            return NULL;
        if(data < _node->data)
            _node->left = deleteNode(_node->left, data);
        else if(data > _node->data)
            _node->right = deleteNode(_node->right, data);
        else{
            if(_node->right == NULL and _node->left == NULL)
                _node = NULL;
            else if(_node->left == NULL)
                _node = _node->right;
            else if(_node->right == NULL)
                _node = _node->left;
            else{
                node *tmp = findMin(_node->right);
                _node->data = tmp->data;
                _node->right = deleteNode(_node->right, tmp->data);
            }
        } 
        return _node;
    }
    int level(node *root){
    if(root == NULL) return 0;
    return max(level(root->right), level(root->left)) + 1;
    }
    void printLevel(){
        cout << level(root);
    }
};

int main(){
    BST bst;
    while(true){
        long long x;
        cin >> x;
        if(x == 0)
            break;
        bst.insert(x);
    }
    bst.printLevel();
    
    return 0;
}