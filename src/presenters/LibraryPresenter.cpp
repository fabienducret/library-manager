#include <iostream>
#include "LibraryPresenter.hpp"

void LibraryPresenter::write(std::string message)
{
    std::cout << message;
}

void LibraryPresenter::askForParam(int &param)
{
    std::cin >> param;
}

void LibraryPresenter::getLine(std::string &param)
{
    std::getline(std::cin >> std::ws, param);
}