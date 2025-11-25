#include <nlohmann/json.hpp>
#include <iostream>
#include "../include/books.hpp"
using namespace std;
using json = nlohmann::json;

int main()
{
    Books book1(12345,"king","me",12,5);
    book1.save_book();
}

