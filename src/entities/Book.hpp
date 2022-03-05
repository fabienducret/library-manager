
#pragma once
#include <string>

class Book
{
public:
    Book(std::string title);
    std::string GetTitle();
    void SetTitle(std::string);

private:
    std::string _title;
};