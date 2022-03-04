#include "../interfaces/ILibraryRepository.hpp"

class LibraryService
{
public:
    LibraryService(ILibraryRepository *libraryRepository) : _libraryRepository(libraryRepository)
    {
    }
    void AddNewBook();
    void ListAllBooks();
    void DeleteBook();

private:
    void ParseBooksAndDisplay(std::vector<Book> books);
    ILibraryRepository *_libraryRepository;
};