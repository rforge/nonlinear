// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tsHistogram
NumericMatrix tsHistogram(NumericVector& x, int& tlag, int& npartitions);
RcppExport SEXP nonlinearTseries_tsHistogram(SEXP xSEXP, SEXP tlagSEXP, SEXP npartitionsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< int& >::type tlag(tlagSEXP );
        Rcpp::traits::input_parameter< int& >::type npartitions(npartitionsSEXP );
        NumericMatrix __result = tsHistogram(x, tlag, npartitions);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mutualInformation
NumericVector mutualInformation(NumericVector& x, int& maxlag, int& npartitions);
RcppExport SEXP nonlinearTseries_mutualInformation(SEXP xSEXP, SEXP maxlagSEXP, SEXP npartitionsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< int& >::type maxlag(maxlagSEXP );
        Rcpp::traits::input_parameter< int& >::type npartitions(npartitionsSEXP );
        NumericVector __result = mutualInformation(x, maxlag, npartitions);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
