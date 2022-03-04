
#pragma once
#include <string>

class Book
{
public:
    Book(std::string title);
    std::string GetTitle();

private:
    std::string _title;
};