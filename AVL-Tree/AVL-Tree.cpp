template <class T>
class avl_node
{

public:
    
        int get_height()
        {
            if (root == NULL) return 0;
            return root.height;
        };

    T data;
    avl_node* left;
    avl_node* right;

private:

    int height;
};

template <class T>
class avl_tree
{
    public: 
        //получить корень дерева
        avl_tree<t> const get_root();

        //вставка
        bool insert(const T& data);

        //удаление
        bool remove(const T& data);

        //поиск
        avl_node<T>* find(avl_node<T>* root, const T& data) const;

    private: 
        
        //Баланс-фактор поддерева
        int balance_factor(avl_node<t>* root) const
        {
            if (root == NULL) {
                return 0;
            }
            return root->left->get_height- root->right->get_height;
        };

        //Повороты дерева
        
        //LL
        void left_rotate(avl_node<T>& root) noexcept
        {
            avl_node<T> newroot = root->right;
            newroot->right = root->right->right;
            root->right = root->right->left;
            newroot->left = root;
            root = newroot;
        };

        //RR
        void right_rotate(avl_node<T>& root) noexcept
        {
            avl_node<T> newroot = root->left;
            newroot->left = root;
            root->left = root->left->right;
            newroot->right = root;
            root = newroot;
        };

        //LR
        void left_right_rotate(avl_node<T>& root) noexcept
        {
            left_rotate(root.left);
            right_rotate(root);
        };

        //RL
        void right_left_rotate(avl_node<T>& root) noexcept
        {
            right_rotate(root.right);
            left_rotate(root);
        };

        
};

