#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

SEXP test_code3(SEXP x) {
  return ATTRIB(x);
}
