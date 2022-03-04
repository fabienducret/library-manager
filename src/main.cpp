#include <iostream>
#include "services/LibraryService.hpp"
#include "presenters/LibraryPresenter.hpp"
#include "repositories/LibraryRepository.hpp"

void askAction(int &action)
{
    LibraryPresenter::write(
        "\n\n1 for adding\n"
        "2 for listing\n"
        "9 for leaving\n"
        "Please enter your action: ");

    LibraryPresenter::askForParam(action);
}

void executeAction(int &action, LibraryService &libraryService)
{
    switch (action)
    {
    case 1:
        libraryService.addNewBook();
        break;
    case 2:
        libraryService.listAllBooks();
        break;
    case 9:
        LibraryPresenter::write("\nBye :)");
        break;
    default:
        LibraryPresenter::write("\nInvalid action\n");
        break;
    }
}

int main()
{
    LibraryRepository libraryRepository;
    LibraryService libraryService(&libraryRepository);

    LibraryPresenter::write("Welcome to your library !");
    int action;

    while (action != 9)
    {
        askAction(action);

        if (!action)
        {
            break;
        }

        executeAction(action, libraryService);
    }

    std::cout << std::endl;
    return 0;
}
