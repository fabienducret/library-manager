#pragma once
#include "../entities/Book.hpp"
#include "../interfaces/ILibraryRepository.hpp"
#include <vector>

class LibraryRepository : public ILibraryRepository
{
public:
    void addBook(Book book);
    std::vector<Book> getAllBooks();

private:
    std::vector<Book> _books;
};