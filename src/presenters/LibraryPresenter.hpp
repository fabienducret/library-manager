#pragma once

class LibraryPresenter
{
public:
    static void Write(std::string message);
    static void AskForParam(int &param);
    static void GetLine(std::string &param);
};