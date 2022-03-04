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

    if (books.size() > 0)
    {
        ParseBooksAndDisplay(books);
    }
    else
    {
        LibraryPresenter::Write("\nNo book stored");
    }
}

void LibraryService::DeleteBook()
{
    LibraryPresenter::Write("\nDeleting a book\n");

    _libraryRepository->DeleteBook();
}

void LibraryService::ParseBooksAndDisplay(std::vector<Book> books)
{
    for (auto book = books.begin(); book != books.end(); ++book)
    {
        LibraryPresenter::Write("\n" + book->GetTitle());
    }
}