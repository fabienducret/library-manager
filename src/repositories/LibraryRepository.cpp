#include "LibraryRepository.hpp"

void LibraryRepository::AddBook(Book book)
{
    _books.push_back(book);
}

std::vector<Book> LibraryRepository::GetAllBooks()
{
    return _books;
}

void LibraryRepository::DeleteBook(int bookToDeleteIndex)
{
    std::vector<Book>::iterator bookToDelete = _books.begin() + bookToDeleteIndex - 1;
    _books.erase(bookToDelete);
}