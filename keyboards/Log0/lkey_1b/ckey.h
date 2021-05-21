#ifndef CMD60_H
#define CMD60_H

#include "quantum.h"

  #define LAYOUT( \
    K51, K01, K21, K50, \
    K23, K40, K10, K41, \
    K33, K03, K13, K00, \
    K22, K32, K52, K43, \
    K53, K31, K11, K02, \
    K42, K30, K12, K20 \
    ) { \
    {K00, K01, K02, K03}, \
    {K10, K11, K12, K13}, \
    {K20, K21, K22, K23}, \
    {K30, K31, K32, K33}, \
    {K40, K41, K42, K43}, \
    {K50, K51, K52, K53}  \
  }

#endif
