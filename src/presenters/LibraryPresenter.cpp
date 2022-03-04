#include <iostream>
#include "LibraryPresenter.hpp"

void LibraryPresenter::Write(std::string message)
{
    std::cout << message;
}

void LibraryPresenter::WriteInGreen(std::string message)
{
    LibraryPresenter::Write("\033[1;32m" + message + "\033[0m");
}

void LibraryPresenter::WriteInBlue(std::string message)
{
    LibraryPresenter::Write("\033[1;34m" + message + "\033[0m");
}

void LibraryPresenter::AskForParam(int &param)
{
    std::cin >> param;
}

void LibraryPresenter::GetLine(std::string &param)
{
    std::getline(std::cin >> std::ws, param);
}