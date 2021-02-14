// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _iNEXT3D_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// RFD
NumericVector RFD(NumericMatrix x, int n, double m, NumericVector q, double V_bar);
RcppExport SEXP _iNEXT3D_RFD(SEXP xSEXP, SEXP nSEXP, SEXP mSEXP, SEXP qSEXP, SEXP V_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type V_bar(V_barSEXP);
    rcpp_result_gen = Rcpp::wrap(RFD(x, n, m, q, V_bar));
    return rcpp_result_gen;
END_RCPP
}
// FDq0
double FDq0(double n, double f1, double f2, double h1, double h2, double A);
RcppExport SEXP _iNEXT3D_FDq0(SEXP nSEXP, SEXP f1SEXP, SEXP f2SEXP, SEXP h1SEXP, SEXP h2SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type f2(f2SEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(FDq0(n, f1, f2, h1, h2, A));
    return rcpp_result_gen;
END_RCPP
}
// FDq1_1
double FDq1_1(double n, double h1, double A);
RcppExport SEXP _iNEXT3D_FDq1_1(SEXP nSEXP, SEXP h1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(FDq1_1(n, h1, A));
    return rcpp_result_gen;
END_RCPP
}
// FDq2
double FDq2(NumericMatrix tmpxv, double n);
RcppExport SEXP _iNEXT3D_FDq2(SEXP tmpxvSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tmpxv(tmpxvSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(FDq2(tmpxv, n));
    return rcpp_result_gen;
END_RCPP
}
// PDq0
double PDq0(double n, double f1, double f2, double g1, double g2);
RcppExport SEXP _iNEXT3D_PDq0(SEXP nSEXP, SEXP f1SEXP, SEXP f2SEXP, SEXP g1SEXP, SEXP g2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type f2(f2SEXP);
    Rcpp::traits::input_parameter< double >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< double >::type g2(g2SEXP);
    rcpp_result_gen = Rcpp::wrap(PDq0(n, f1, f2, g1, g2));
    return rcpp_result_gen;
END_RCPP
}
// PDq1_2
double PDq1_2(double n, double g1, double A);
RcppExport SEXP _iNEXT3D_PDq1_2(SEXP nSEXP, SEXP g1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(PDq1_2(n, g1, A));
    return rcpp_result_gen;
END_RCPP
}
// PDq2
double PDq2(NumericMatrix tmpaL, double n, double t_bar);
RcppExport SEXP _iNEXT3D_PDq2(SEXP tmpaLSEXP, SEXP nSEXP, SEXP t_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tmpaL(tmpaLSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type t_bar(t_barSEXP);
    rcpp_result_gen = Rcpp::wrap(PDq2(tmpaL, n, t_bar));
    return rcpp_result_gen;
END_RCPP
}
// PDq_2nd
double PDq_2nd(double n, double g1, double A, double q);
RcppExport SEXP _iNEXT3D_PDq_2nd(SEXP nSEXP, SEXP g1SEXP, SEXP ASEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(PDq_2nd(n, g1, A, q));
    return rcpp_result_gen;
END_RCPP
}
// PDq
NumericVector PDq(NumericMatrix tmpaL, int n, NumericVector qs, double g1, double A, double t_bar);
RcppExport SEXP _iNEXT3D_PDq(SEXP tmpaLSEXP, SEXP nSEXP, SEXP qsSEXP, SEXP g1SEXP, SEXP ASEXP, SEXP t_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tmpaL(tmpaLSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qs(qsSEXP);
    Rcpp::traits::input_parameter< double >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type t_bar(t_barSEXP);
    rcpp_result_gen = Rcpp::wrap(PDq(tmpaL, n, qs, g1, A, t_bar));
    return rcpp_result_gen;
END_RCPP
}
// delta
double delta(NumericMatrix del_tmpaL, double k, double n);
RcppExport SEXP _iNEXT3D_delta(SEXP del_tmpaLSEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type del_tmpaL(del_tmpaLSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(delta(del_tmpaL, k, n));
    return rcpp_result_gen;
END_RCPP
}
// delta_part2
NumericVector delta_part2(NumericVector ai, double k, double n);
RcppExport SEXP _iNEXT3D_delta_part2(SEXP aiSEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ai(aiSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(delta_part2(ai, k, n));
    return rcpp_result_gen;
END_RCPP
}
// RPD_old
NumericVector RPD_old(NumericMatrix x, int n, int m, NumericVector q);
RcppExport SEXP _iNEXT3D_RPD_old(SEXP xSEXP, SEXP nSEXP, SEXP mSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(RPD_old(x, n, m, q));
    return rcpp_result_gen;
END_RCPP
}
// RPD
NumericMatrix RPD(NumericVector ai, NumericMatrix Lis, int n, int m, NumericVector q);
RcppExport SEXP _iNEXT3D_RPD(SEXP aiSEXP, SEXP LisSEXP, SEXP nSEXP, SEXP mSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ai(aiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Lis(LisSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(RPD(ai, Lis, n, m, q));
    return rcpp_result_gen;
END_RCPP
}
// ghat_pt2
NumericMatrix ghat_pt2(NumericVector ai, int n, int mmax);
RcppExport SEXP _iNEXT3D_ghat_pt2(SEXP aiSEXP, SEXP nSEXP, SEXP mmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ai(aiSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type mmax(mmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(ghat_pt2(ai, n, mmax));
    return rcpp_result_gen;
END_RCPP
}
// PD1_2nd
double PD1_2nd(double n, double f1, double A);
RcppExport SEXP _iNEXT3D_PD1_2nd(SEXP nSEXP, SEXP f1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(PD1_2nd(n, f1, A));
    return rcpp_result_gen;
END_RCPP
}
// Dq_TD
NumericVector Dq_TD(NumericMatrix ifi, int n, NumericVector qs, double f1, double A);
RcppExport SEXP _iNEXT3D_Dq_TD(SEXP ifiSEXP, SEXP nSEXP, SEXP qsSEXP, SEXP f1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ifi(ifiSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qs(qsSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(Dq_TD(ifi, n, qs, f1, A));
    return rcpp_result_gen;
END_RCPP
}
// qPDFUN
NumericVector qPDFUN(NumericVector q, NumericVector Xi, const int n);
RcppExport SEXP _iNEXT3D_qPDFUN(SEXP qSEXP, SEXP XiSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(qPDFUN(q, Xi, n));
    return rcpp_result_gen;
END_RCPP
}
// TD1_2nd
double TD1_2nd(double n, double f1, double f2);
RcppExport SEXP _iNEXT3D_TD1_2nd(SEXP nSEXP, SEXP f1SEXP, SEXP f2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type f2(f2SEXP);
    rcpp_result_gen = Rcpp::wrap(TD1_2nd(n, f1, f2));
    return rcpp_result_gen;
END_RCPP
}
// TDq_2nd
double TDq_2nd(double n, double f1, double A, double q);
RcppExport SEXP _iNEXT3D_TDq_2nd(SEXP nSEXP, SEXP f1SEXP, SEXP ASEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(TDq_2nd(n, f1, A, q));
    return rcpp_result_gen;
END_RCPP
}
// TDq
NumericVector TDq(NumericMatrix ifi, int n, NumericVector qs, double f1, double A);
RcppExport SEXP _iNEXT3D_TDq(SEXP ifiSEXP, SEXP nSEXP, SEXP qsSEXP, SEXP f1SEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ifi(ifiSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qs(qsSEXP);
    Rcpp::traits::input_parameter< double >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(TDq(ifi, n, qs, f1, A));
    return rcpp_result_gen;
END_RCPP
}
// qTDFUN
NumericVector qTDFUN(NumericVector q, NumericVector Xi, const int n);
RcppExport SEXP _iNEXT3D_qTDFUN(SEXP qSEXP, SEXP XiSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(qTDFUN(q, Xi, n));
    return rcpp_result_gen;
END_RCPP
}
// qTD_MLE
NumericVector qTD_MLE(NumericVector q, NumericVector ai);
RcppExport SEXP _iNEXT3D_qTD_MLE(SEXP qSEXP, SEXP aiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ai(aiSEXP);
    rcpp_result_gen = Rcpp::wrap(qTD_MLE(q, ai));
    return rcpp_result_gen;
END_RCPP
}
// RTD
NumericVector RTD(NumericMatrix x, int n, double m, NumericVector q);
RcppExport SEXP _iNEXT3D_RTD(SEXP xSEXP, SEXP nSEXP, SEXP mSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(RTD(x, n, m, q));
    return rcpp_result_gen;
END_RCPP
}
// RTD_inc
NumericVector RTD_inc(NumericMatrix y, int nT, double t_, NumericVector q);
RcppExport SEXP _iNEXT3D_RTD_inc(SEXP ySEXP, SEXP nTSEXP, SEXP t_SEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nT(nTSEXP);
    Rcpp::traits::input_parameter< double >::type t_(t_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(RTD_inc(y, nT, t_, q));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_iNEXT3D_rcpp_hello_world", (DL_FUNC) &_iNEXT3D_rcpp_hello_world, 0},
    {"_iNEXT3D_RFD", (DL_FUNC) &_iNEXT3D_RFD, 5},
    {"_iNEXT3D_FDq0", (DL_FUNC) &_iNEXT3D_FDq0, 6},
    {"_iNEXT3D_FDq1_1", (DL_FUNC) &_iNEXT3D_FDq1_1, 3},
    {"_iNEXT3D_FDq2", (DL_FUNC) &_iNEXT3D_FDq2, 2},
    {"_iNEXT3D_PDq0", (DL_FUNC) &_iNEXT3D_PDq0, 5},
    {"_iNEXT3D_PDq1_2", (DL_FUNC) &_iNEXT3D_PDq1_2, 3},
    {"_iNEXT3D_PDq2", (DL_FUNC) &_iNEXT3D_PDq2, 3},
    {"_iNEXT3D_PDq_2nd", (DL_FUNC) &_iNEXT3D_PDq_2nd, 4},
    {"_iNEXT3D_PDq", (DL_FUNC) &_iNEXT3D_PDq, 6},
    {"_iNEXT3D_delta", (DL_FUNC) &_iNEXT3D_delta, 3},
    {"_iNEXT3D_delta_part2", (DL_FUNC) &_iNEXT3D_delta_part2, 3},
    {"_iNEXT3D_RPD_old", (DL_FUNC) &_iNEXT3D_RPD_old, 4},
    {"_iNEXT3D_RPD", (DL_FUNC) &_iNEXT3D_RPD, 5},
    {"_iNEXT3D_ghat_pt2", (DL_FUNC) &_iNEXT3D_ghat_pt2, 3},
    {"_iNEXT3D_PD1_2nd", (DL_FUNC) &_iNEXT3D_PD1_2nd, 3},
    {"_iNEXT3D_Dq_TD", (DL_FUNC) &_iNEXT3D_Dq_TD, 5},
    {"_iNEXT3D_qPDFUN", (DL_FUNC) &_iNEXT3D_qPDFUN, 3},
    {"_iNEXT3D_TD1_2nd", (DL_FUNC) &_iNEXT3D_TD1_2nd, 3},
    {"_iNEXT3D_TDq_2nd", (DL_FUNC) &_iNEXT3D_TDq_2nd, 4},
    {"_iNEXT3D_TDq", (DL_FUNC) &_iNEXT3D_TDq, 5},
    {"_iNEXT3D_qTDFUN", (DL_FUNC) &_iNEXT3D_qTDFUN, 3},
    {"_iNEXT3D_qTD_MLE", (DL_FUNC) &_iNEXT3D_qTD_MLE, 2},
    {"_iNEXT3D_RTD", (DL_FUNC) &_iNEXT3D_RTD, 4},
    {"_iNEXT3D_RTD_inc", (DL_FUNC) &_iNEXT3D_RTD_inc, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_iNEXT3D(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
