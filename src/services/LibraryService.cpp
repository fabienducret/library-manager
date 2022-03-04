#include <iostream>
#include "LibraryService.hpp"
#include "../entities/Book.hpp"

void LibraryService::AddNewBook()
{
    std::string title;
    _libraryPresenter->WriteInBlue("\nPlease enter the title of your book :\n");
    _libraryPresenter->GetLine(title);

    Book book(title);
    _libraryRepository->AddBook(book);

    _libraryPresenter->WriteInGreen(book.GetTitle() + " is added to your library.");
}

void LibraryService::ListAllBooks()
{
    _libraryPresenter->WriteInBlue("\nListing all books\n");
    std::vector<Book> books = _libraryRepository->GetAllBooks();

    if (books.size() > 0)
    {
        ParseBooksAndDisplay(books);
    }
    else
    {
        _libraryPresenter->WriteInGreen("\nNo book stored");
    }
}

void LibraryService::DeleteBook()
{
    _libraryPresenter->WriteInBlue("\nDeleting a book\n");
    std::vector<Book> books = _libraryRepository->GetAllBooks();

    if (books.size() > 0)
    {
        _libraryRepository->DeleteBook();
    }
    else
    {
        _libraryPresenter->WriteInGreen("\nNo book stored");
    }
}

void LibraryService::ParseBooksAndDisplay(std::vector<Book> books)
{
    for (auto book = books.begin(); book != books.end(); ++book)
    {
        _libraryPresenter->Write("\n");
        _libraryPresenter->WriteInGreen(book->GetTitle());
    }
}