#include "Book.hpp"

Book::Book(std::string title) : _title(title)
{
}

std::string Book::GetTitle()
{
    return _title;
}