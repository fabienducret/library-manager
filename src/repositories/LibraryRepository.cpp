#include "LibraryRepository.hpp"
#include "../entities/Book.hpp"

void LibraryRepository::addBook(Book book)
{
    _books.push_back(book);
}

std::vector<Book> LibraryRepository::getAllBooks()
{
    return _books;
}