#include <Rcpp.h>
#include "kvk2030_types.h"

SitPovodi::SitPovodi() {};

SitPovodi::~SitPovodi() {};

//[[Rcpp::export]]
void pridej_povodi(Rcpp::XPtr<SitPovodi> sitPovodi, std::string povodi) 
{
  sitPovodi->pridej_povodi(povodi);
  return ;
}
  
// [[Rcpp::export]]
Rcpp::XPtr<SitPovodi> novaSitPovodi() {
  // Vytvoř instanci SitPovodi a nabídni pointer
  Rcpp::XPtr<SitPovodi> ptr(new SitPovodi(), true);
  return ptr;
}

// [[Rcpp::export]]
int getSitPovodiParameter(Rcpp::XPtr<SitPovodi> ptr) {
  // Získej argument 
  return ptr->getParameter();
}

