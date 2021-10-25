#include <iostream>
using namespace std;
int cnt = 0;
struct node
{
    node *left, *right;
    int key;
    node(int _key = 0)
    {
        left = right = NULL;
        key = _key;
    }
    node(int key, node *left, node *right) : key(key), left(left), right(right)
    {
    }
};
struct bst
{
    node *root = NULL;
    void insert(node *cur, int x)
    {
        node *next = NULL;
        if (x <= cur->key)
        {
            if (cur->left == NULL)
            {
                cur->left = new node(x);
                return;
            }
            next = cur->left;
        }
        else
        {
            if (cur->right == NULL)
            {
                cur->right = new node(x);
                return;
            }
            next = cur->right;
        }
        insert(next, x);
    }
    void insert(int x)
    {
        if (root == NULL)
        {
            root = new node(x);
        }
        else
            insert(root, x);
    }
    node *find(node *cur, int x)
    {
        node *next = NULL;
        if (x == cur->key)
        {
            return cur;
        }
        if (x < cur->key)
        {
            return (cur->left == NULL) ? NULL : find(cur->left, x);
        }
        //x > key
        return (cur->right == NULL) ? NULL : find(cur->right, x);
    }
    node *find(int x)
    {
        return find(root, x);
    }

    void print(node *cur, int tab = 1)
    {
        if (cur != NULL)
        {
            printf("[%d]\n", cur->key);
        }
        else
        {
            puts("");
            return;
        }
        for (int i = 0; i < tab; i++)
            putchar('\t');
        printf("L ");
        print(cur->left, tab + 1);
        for (int i = 0; i < tab; i++)
            putchar('\t');
        printf("R ");
        print(cur->right, tab + 1);
    }
    void print()
    {
        print(root);
    }
    node *del(node *cur, int x)
    {
        if (cur == NULL)
            return NULL;
        if (x < cur->key)
        {
            cur->left = del(cur->left, x);
        }
        else if (cur->key < x)
        {
            cur->right = del(cur->right, x);
        }
        else
        { // cur->key == x
            //cur is leaf
            if (cur->left == NULL and cur->right == NULL)
            {
                delete cur;
                return NULL;
            }
            //cur has 1 child
            if (cur->left == NULL or cur->right == NULL)
            {
                node *next = cur->left != NULL ? cur->left : cur->right;
                delete cur;
                return next;
            }
            //cur has 2 children
            node *next = cur->right;
            while (next->left != NULL)
            {
                next = next->left;
            }
            cur->key = next->key; // copy data
            cur->right = del(cur->right, next->key);
        }

        return cur;
    }
    void del(int x)
    {
        root = del(root, x);
    }
    int height(node *root)
    {
        int mx;
        if (root == NULL)
            return 0;
        (height(root->left) > height(root->right)) ? mx = height(root->left) : mx = height(root->right);
        return 1 + mx;
    }
    void printHeight()
    {
        cout << height(root);
    }
    bool isBST(node *root, node *l = NULL, node *r = NULL)
    {
        // Base condition
        if (root == NULL)
            return true;

        // if left node exist then check it has
        // correct data or not i.e. left node's data
        // should be less than root's data
        if (l != NULL and root->key <= l->key)
            return false;

        // if right node exist then check it has
        // correct data or not i.e. right node's data
        // should be greater than root's data
        if (r != NULL and root->key >= r->key)
            return false;

        // check recursively for every node.
        return isBST(root->left, l, root) and
               isBST(root->right, root, r);
    }
    long foo(int n)
    {
        int res = 1;
        for (int x = n - 2; x <= n; x++)
            res *= x;
        return res / 6;
    }
};
int main()
{
    bst bst;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        bst.insert(a);
    }
    bst.print();
    return 0;
}