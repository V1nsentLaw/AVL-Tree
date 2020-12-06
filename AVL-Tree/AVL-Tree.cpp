#include <iostream>
#include <string>

template <class T>
class avl_node
{
    public:

    private: 

    T value;
    avl_node* left;
    avl_node* right;
        
};

template <class T>
class avl_tree
{
    public: 
        //получить корень дерева
        avl_tree<t> const get_root();

        bool insert(const T& data);

        bool remove(const T& data);

        avl_node<T>* find(avl_node<T>* root, const T& value) const;

        //Высота узла
        int height(avl_node<t>* subtree) const;

        //Посчитать баланс-фактор узла дерева
        int balance_factor(avl_node<t>* subtree) const;

        

    private: 
        

        //Повороты дерева
        void left_rotate(avl_node<T>& root) noexcept
        {
            avl_node<T> newroot = root.right;
            newroot.right = root.right->right;
            root.right = root.right.left;
            newroot.left = root;
            root = newroot;
        };

        void right_rotate(avl_node<T>& root) noexcept
        {
            avl_node<T> newroot = root.left;
            newroot.left = root;
            root.left = root.left.right;
            newroot.right = root;
            root = newroot;
        };

        void left_right_rotate(avl_node<T>& root) noexcept
        {
            left_rotate(root.left);
            right_rotate(root);
        };
        void right_left_rotate(avl_node<T>& root) noexcept
        {
            right_rotate(root.right);
            left_rotate(root);
        };

        
};

int main()
{
    return 0;
};
