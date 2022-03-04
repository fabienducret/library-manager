#include <iostream>
#include "services/LibraryService.hpp"
#include "presenters/LibraryPresenter.hpp"
#include "repositories/LibraryRepository.hpp"

void askAction(int &action, LibraryPresenter &libraryPresenter)
{
    libraryPresenter.Write(
        "\n\n1 for adding\n"
        "2 for listing\n"
        "3 for deleting\n"
        "9 for leaving\n"
        "Please enter your action: ");

    libraryPresenter.AskForParam(action);
}

void executeAction(int &action, LibraryService &libraryService, LibraryPresenter &libraryPresenter)
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
        libraryPresenter.Write("\nBye :)");
        break;
    default:
        libraryPresenter.Write("\nInvalid action\n");
        break;
    }
}

int main()
{
    LibraryRepository libraryRepository;
    LibraryPresenter libraryPresenter;
    LibraryService libraryService(&libraryRepository, &libraryPresenter);

    libraryPresenter.WriteInBlue("Welcome to your library !");
    int action;

    while (action != 9)
    {
        askAction(action, libraryPresenter);
        executeAction(action, libraryService, libraryPresenter);
    }

    std::cout << std::endl;
    return 0;
}
