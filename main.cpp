#include <iostream>

// Binary tree
template <typename T>
class BinTreeNode {
    public:
        // The actual value contained in the node
        T val; // The val of the node
        BinTreeNode * left; // The left node
        BinTreeNode * right; // The right node

        BinTreeNode<T>(T _val); // The constructor

        void AddNode(T _val); // Adding a node to the tree
};

template <typename T>
BinTreeNode<T>::BinTreeNode(T _val){
    val = _val;
}

template <typename T>
void BinTreeNode<T>::AddNode(T _val){
    if (_val < val){ // Going the the left of the current node
        if (left){ // If left is not a null ptr
            left = new BinTreeNode(_val);
        } else {
            left->AddNode(_val);
        }
    } else if (_val > val){ // Going to the right of the current node
        if (right){ // If right is not a null ptr
            right = new BinTreeNode(_val);
        } else {
            right->AddNode(_val);
        }
    }
}

int main(void){
    BinTreeNode<int> intRoot(0);
    intRoot.AddNode(5);
    intRoot.right->AddNode(3);

    std::cout << intRoot.val << std::endl;
    std::cout << intRoot.right->val << std::endl;
    std::cout << intRoot.right->left->val << std::endl;

    return 0;
}