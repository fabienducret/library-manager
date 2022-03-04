#pragma once
#include "../entities/Book.hpp"
#include <vector>

class ILibraryRepository
{
public:
    virtual void addBook(Book book) = 0;
    virtual std::vector<Book> getAllBooks() = 0;

private:
    std::vector<Book> _books;
};