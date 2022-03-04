#include "../interfaces/ILibraryRepository.hpp"

class LibraryService
{
public:
    LibraryService(ILibraryRepository *libraryRepository) : _libraryRepository(libraryRepository)
    {
    }
    void AddNewBook();
    void ListAllBooks();

private:
    ILibraryRepository *_libraryRepository;
};