#include <iostream>
#include "LibraryService.hpp"
#include "../presenters/LibraryPresenter.hpp"
#include "../entities/Book.hpp"

void LibraryService::AddNewBook()
{
    std::string title;
    LibraryPresenter::Write("\nPlease enter the title of your book :\n");
    LibraryPresenter::GetLine(title);

    Book book(title);
    _libraryRepository->AddBook(book);

    LibraryPresenter::Write(book.GetTitle() + " is added to your library.");
}

void LibraryService::ListAllBooks()
{
    LibraryPresenter::Write("\nListing all books\n");
    std::vector<Book> books = _libraryRepository->GetAllBooks();

    for (auto book = books.begin(); book != books.end(); ++book)
    {
        LibraryPresenter::Write(book->GetTitle() + "\n");
    }
}