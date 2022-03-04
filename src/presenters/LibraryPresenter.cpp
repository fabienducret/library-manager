#include <iostream>
#include "LibraryPresenter.hpp"

void LibraryPresenter::Write(std::string message)
{
    std::cout << message;
}

void LibraryPresenter::AskForParam(int &param)
{
    std::cin >> param;
}

void LibraryPresenter::GetLine(std::string &param)
{
    std::getline(std::cin >> std::ws, param);
}