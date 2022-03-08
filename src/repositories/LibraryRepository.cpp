#include "LibraryRepository.hpp"

void LibraryRepository::AddBook(Book book)
{
    _books.push_back(book);
}

std::vector<Book> LibraryRepository::GetAllBooks()
{
    return _books;
}

void LibraryRepository::DeleteBook(int bookToDelete)
{
    try
    {
        std::vector<Book>::iterator book = _books.begin() + bookToDelete - 1;
        _books.erase(_books.begin() + bookToDelete - 1);
    }
    catch ()
    {
    }
}