#include <nlohmann/json.hpp>
#include <iostream>
#include "../include/Tree.hpp"
#include "../include/books.hpp"
using namespace std;
using json = nlohmann::json;

int main()
{
    Books b1=Books();
    Tree<Books> tr1=b1.load_book();
    tr1.inorder();
}

