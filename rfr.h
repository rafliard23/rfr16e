// Copyright 2021 Muhammad Rafli Ardiansyah (@rafliard23)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_RFR( \
  K00, K01, K02, K03, \
  K10, K11, K12, K13, \
  K20, K21, K22, K23, \
  K30, K31, K32, K33  \
){ \
  { K00, K01, K02, K03 }, \
  { K10, K11, K12, K13 }, \
  { K20, K21, K22, K23 }, \
  { K30, K31, K32, K33 }  \
}
