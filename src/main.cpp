#include <iostream>
#include "services/LibraryService.hpp"
#include "presenters/LibraryPresenter.hpp"
#include "repositories/LibraryRepository.hpp"

void askAction(int &action)
{
    LibraryPresenter::Write(
        "\n\n1 for adding\n"
        "2 for listing\n"
        "3 for deleting\n"
        "9 for leaving\n"
        "Please enter your action: ");

    LibraryPresenter::AskForParam(action);
}

void executeAction(int &action, LibraryService &libraryService)
{
    switch (action)
    {
    case 1:
        libraryService.AddNewBook();
        break;
    case 2:
        libraryService.ListAllBooks();
        break;
    case 3:
        libraryService.DeleteBook();
        break;
    case 9:
        LibraryPresenter::Write("\nBye :)");
        break;
    default:
        LibraryPresenter::Write("\nInvalid action\n");
        break;
    }
}

int main()
{
    LibraryRepository libraryRepository;
    LibraryService libraryService(&libraryRepository);

    LibraryPresenter::Write("Welcome to your library !");
    int action;

    while (action != 9)
    {
        askAction(action);
        executeAction(action, libraryService);
    }

    std::cout << std::endl;
    return 0;
}
