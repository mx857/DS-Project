#include <nlohmann/json.hpp>
#include <iostream>
#include "../include/Tree.hpp"
#include "../include/books.hpp"
using namespace std;
using json = nlohmann::json;

int main()
{
    Tree<Books> tree;
    tree.insert(Books(21,"asd","asfdg",21,234));
    tree.insert(Books(32,"asd","asfdg",21,234));
    tree.insert(Books(14,"asd","asfdg",21,234));
    tree.insert(Books(23,"asd","asfdg",21,234));
    tree.insert(Books(52,"asd","asfdg",21,234));

    tree.inorder();
}

