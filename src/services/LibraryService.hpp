#include "../interfaces/ILibraryRepository.hpp"
#include "../interfaces/ILibraryPresenter.hpp"

class LibraryService
{
public:
    LibraryService(
        ILibraryRepository *libraryRepository,
        ILibraryPresenter *libraryPresenter)
    {
        _libraryRepository = libraryRepository;
        _libraryPresenter = libraryPresenter;
    }
    void AddNewBook();
    void ListAllBooks();
    void DeleteBook();

private:
    void ParseBooksAndDisplay(std::vector<Book> books);
    ILibraryRepository *_libraryRepository;
    ILibraryPresenter *_libraryPresenter;
};