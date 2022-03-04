#include <iostream>
#include "LibraryService.hpp"
#include "../presenters/LibraryPresenter.hpp"
#include "../entities/Book.hpp"

void LibraryService::AddNewBook()
{
    std::string title;
    LibraryPresenter::WriteInBlue("\nPlease enter the title of your book :\n");
    LibraryPresenter::GetLine(title);

    Book book(title);
    _libraryRepository->AddBook(book);

    LibraryPresenter::WriteInGreen(book.GetTitle() + " is added to your library.");
}

void LibraryService::ListAllBooks()
{
    LibraryPresenter::WriteInBlue("\nListing all books\n");
    std::vector<Book> books = _libraryRepository->GetAllBooks();

    if (books.size() > 0)
    {
        ParseBooksAndDisplay(books);
    }
    else
    {
        LibraryPresenter::WriteInGreen("\nNo book stored");
    }
}

void LibraryService::DeleteBook()
{
    LibraryPresenter::WriteInBlue("\nDeleting a book\n");
    std::vector<Book> books = _libraryRepository->GetAllBooks();

    if (books.size() > 0)
    {
        _libraryRepository->DeleteBook();
    }
    else
    {
        LibraryPresenter::WriteInGreen("\nNo book stored");
    }
}

void LibraryService::ParseBooksAndDisplay(std::vector<Book> books)
{
    for (auto book = books.begin(); book != books.end(); ++book)
    {
        LibraryPresenter::Write("\n");
        LibraryPresenter::WriteInGreen(book->GetTitle());
    }
}