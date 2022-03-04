#include "../interfaces/ILibraryRepository.hpp"
#include "../presenters/LibraryPresenter.hpp"
#include "../entities/Book.hpp"

class LibraryService
{
public:
    LibraryService(ILibraryRepository *libraryRepository) : _libraryRepository(libraryRepository)
    {
    }
    void addNewBook();
    void listAllBooks();

private:
    ILibraryRepository *_libraryRepository;
};