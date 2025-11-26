// #include <nlohmann/json.hpp>
#include <iostream>
#include "../include/Tree.hpp"
#include "../include/books.hpp"
using namespace std;
// using json = nlohmann::json;

int main()
{
    cout << "Library Management System Starting..." << endl;
    
    // Test the Books class
    Books book1("The Great Gatsby", "F. Scott Fitzgerald", 5, 3);
    Books book2("1984", "George Orwell", 3, 2);
    
    // Test the Tree
    Tree<Books> library;
    library.insert(book1);
    library.insert(book2);
    
    cout << "Books in library (in-order):" << endl;
    library.inorder();
    

    
    return 0;
}

