#ifndef CMD60_H
#define CMD60_H

#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, \
    K04, K05, K06, K07, \
    K08, K09, K0A, K0B, \
    K0C, K0D, K10, K11, \
    K12, K13, K14, K15, \
    K16, K17, K18, K19 \
    ) { \
  {  K00,  K01,  K02,  K03}, \
  {  K04,  K05,  K06,  K07}, \
  {  K08,  K09,  K0A,  K0B}, \
  {  K0C,  K0D,  K10,  K11}, \
  {  K12,  K13,  K14,  K15}, \
  {  K16,  K17,  K18,  K19} \
  }

#endif
