#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>
using json=nlohmann::json;
using namespace std;

class Books
{
private:
    int book_id;
    string title;
    string author;
    int total_copy;
    int available_copy;
public:
    Books(int book_id,string title,string author,int total_copy,int available_copy){
        this->book_id=book_id;
        this->title=title;
        this->author=author;
        this->total_copy=total_copy;
        this->available_copy=available_copy;
    };

    Books();

    void save_book(){
        json book;
        book[to_string(this->book_id)]={
            {"Title",this->title},
            {"Author",this->author},
            {"Total",this->total_copy},
            {"Available",this->available_copy}
        };
        ofstream file("../database/Books.json");
        file<<book.dump(4);
    }
    
};
