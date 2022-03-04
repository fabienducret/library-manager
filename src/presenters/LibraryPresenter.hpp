#pragma once

class LibraryPresenter
{
public:
    static void write(std::string message);
    static void askForParam(int &param);
    static void getLine(std::string &param);
};