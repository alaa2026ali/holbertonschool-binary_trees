# Binary Trees Project

## Description
This project implements a set of functions to manipulate binary trees in C.
It covers creation, traversal, and different operations such as:
* Height and Depth
* Size, Leaves, and Nodes
* Tree properties (Full, Perfect, Balanced)
* Node relationships (Parent, Sibling, Uncle)

## Data Structure
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

## Requirements
* OS: Ubuntu 20.04 LTS
* Compiler: GCC
* Language: C (GNU89)
* Style: Betty compliant
* No global variables
* Maximum 5 functions per file

## Installation
Clone the repository:
`git clone https://github.com/alaa2026ali/holbertonschool-binary_trees.git`

Go to the project directory:
`cd holbertonschool-binary_trees`

## Compilation and Testing
Compile:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.c -o test`

Run:
`./test`

Check Betty style:
`betty-style *.c`
`betty-doc *.h`

## Example Binary Tree
        98
       /  \
     12    402
    /
   6

## Functions
* **binary_tree_node**: Creates a new node
* **binary_tree_insert_left**: Inserts a node to the left
* **binary_tree_insert_right**: Inserts a node to the right
* **binary_tree_delete**: Deletes an entire tree
* **binary_tree_is_leaf**: Checks if node is a leaf
* **binary_tree_is_root**: Checks if node is root
* **binary_tree_preorder**: Pre-order traversal
* **binary_tree_inorder**: In-order traversal
* **binary_tree_postorder**: Post-order traversal
* **binary_tree_height**: Measures height
* **binary_tree_depth**: Measures depth
* **binary_tree_size**: Counts total nodes
* **binary_tree_leaves**: Counts leaves
* **binary_tree_nodes**: Counts nodes with children
* **binary_tree_balance**: Calculates balance factor
* **binary_tree_is_full**: Checks if tree is full
* **binary_tree_is_perfect**: Checks if tree is perfect
* **binary_tree_sibling**: Finds sibling
* **binary_tree_uncle**: Finds uncle

## Usage Example
```c
binary_tree_t *root = binary_tree_node(NULL, 98);
binary_tree_insert_left(root, 12);
binary_tree_insert_right(root, 402);

printf("%d\n", binary_tree_is_perfect(root));
```
**Output:** 0

## Concepts Covered
* Binary Trees
* Recursion
* Tree Traversal
* Tree Properties
* Memory Management in C

## Authors
* Alaa Aldwasari
* Alraddadi Muhannad

## License
This project is for educational purposes (Holberton School).
