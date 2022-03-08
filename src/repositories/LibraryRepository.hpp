#pragma once
#include "../entities/Book.hpp"
#include "../interfaces/ILibraryRepository.hpp"
#include <vector>

class LibraryRepository : public ILibraryRepository
{
public:
    void AddBook(Book book);
    std::vector<Book> GetAllBooks();
    void DeleteBook(int bookToDelete);

private:
    std::vector<Book> _books;
};