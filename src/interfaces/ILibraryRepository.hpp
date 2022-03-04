#pragma once
#include "../entities/Book.hpp"
#include <vector>

class ILibraryRepository
{
public:
    virtual void AddBook(Book book) = 0;
    virtual std::vector<Book> GetAllBooks() = 0;

private:
    std::vector<Book> _books;
};