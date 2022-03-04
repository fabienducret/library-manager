CXX = clang++

all: clean main	LibraryService LibraryPresenter LibraryRepository Book
	$(CXX) -o bin/library bin/main.o bin/LibraryService.o bin/LibraryPresenter.o bin/LibraryRepository.o bin/Book.o
main: src/main.cpp 
	$(CXX) -c src/main.cpp -o bin/main.o
LibraryService: src/services/LibraryService.cpp
	$(CXX) -c src/services/LibraryService.cpp -o bin/LibraryService.o
LibraryPresenter: src/presenters/LibraryPresenter.cpp
	$(CXX) -c src/presenters/LibraryPresenter.cpp -o bin/LibraryPresenter.o
LibraryRepository: src/repositories/LibraryRepository.cpp
	$(CXX) -c src/repositories/LibraryRepository.cpp -o bin/LibraryRepository.o
Book: src/entities/Book.cpp
	$(CXX) -c src/entities/Book.cpp -o bin/Book.o

clean: 
	rm -f bin/*