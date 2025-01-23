#pragma once

#include <vector>
#include <string>

class Povodi {
private:
  std::vector<std::string> _horni_povodi;
  std::vector<std::string> _dolni_povodi;
public:
  Povodi();      /* ctor */
  ~Povodi();     /* dtor */
  void pridej_horni_povodi();
  void odeber_horni_povodi();

  void pridej_dolni_povodi();
  void odeber_dolni_povodi();

  std::string horni_povodi(int pozice) const { return _horni_povodi.at(pozice - 1);}
  std::string dolni_povodi(int pozice) const { return _dolni_povodi.at(pozice - 1);}
};

class SitPovodi {
private:
  int parameter {3};
  std::vector<Povodi> povodi;
  
public:
  // Constructor
  SitPovodi();
  ~SitPovodi();
  
  void pridej_povodi(std::string povodi);
  
  int getParameter() const { return parameter; }
  void sit_horni();
  void sit_dolni();
};

