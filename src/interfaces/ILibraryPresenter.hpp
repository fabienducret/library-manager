#pragma once

class ILibraryPresenter
{
public:
  virtual void Write(std::string message) = 0;
  virtual void WriteInGreen(std::string message) = 0;
  virtual void WriteInBlue(std::string message) = 0;
  virtual void AskForParam(int &param) = 0;
  virtual void GetLine(std::string &param) = 0;
};