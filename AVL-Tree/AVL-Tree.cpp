#include <iostream>
#include <string>

template <class T>
class  avl_node
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
        avl_tree<t> const get_root();

        bool insert(const T& data);

        bool remove(const T& data);

        avl_node<T>* find(avl_node<T>* root, const T& value) const;

        int height(avl_node<t>* subtree) const;

        int balance_factor(avl_node<t>* subtree) const;

        

    private: 
        
        void left_rotate();

        void right_rotate();
};

int main()
{
    
}
