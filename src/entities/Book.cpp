#include "Book.hpp"

Book::Book(std::string title) : _title(title)
{
}

std::string Book::GetTitle()
{
    return _title;
}

void Book::SetTitle(std::string title)
{
    _title = title;
}