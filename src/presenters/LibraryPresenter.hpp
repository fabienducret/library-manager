#pragma once
#include "../interfaces/ILibraryPresenter.hpp"

class LibraryPresenter : public ILibraryPresenter
{
public:
    void Write(std::string message);
    void WriteInGreen(std::string message);
    void WriteInBlue(std::string message);
    void AskForParam(int &param);
    void GetLine(std::string &param);
};