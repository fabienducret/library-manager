#include "LibraryRepository.hpp"
#include "../entities/Book.hpp"

void LibraryRepository::AddBook(Book book)
{
    _books.push_back(book);
}

std::vector<Book> LibraryRepository::GetAllBooks()
{
    return _books;
}