#include <iostream>
#include "LibraryService.hpp"
#include "../presenters/LibraryPresenter.hpp"
#include "../entities/Book.hpp"

void LibraryService::addNewBook()
{
    std::string title;
    LibraryPresenter::write("\nPlease enter the title of your book :\n");
    LibraryPresenter::getLine(title);

    Book book(title);
    _libraryRepository->addBook(book);

    LibraryPresenter::write(book.GetTitle() + " is added to your library.");
}

void LibraryService::listAllBooks()
{
    LibraryPresenter::write("\nListing all books\n");
    std::vector<Book> books = _libraryRepository->getAllBooks();

    for (auto book = books.begin(); book != books.end(); ++book)
    {
        LibraryPresenter::write(book->GetTitle() + "\n");
    }
}