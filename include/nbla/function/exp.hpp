// Copyright (c) 2017 Sony Corporation. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// -*- coding:utf-8 -*-
/*
 * Copyright (C) 2016 Sony Corporation
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Sony Corporation;
 * the contents of this file is not to be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior written
 * permission of Sony Corporation.
 */

/** Exp
 */
#ifndef __NBLA_FUNCTION_EXP_HPP__
#define __NBLA_FUNCTION_EXP_HPP__

#include <nbla/function/utils/base_transform_unary.hpp>

#include <cmath>

namespace nbla {

/** @class Exp
    @brief Take elementwise \f$\exp(x)\f$.
 */
NBLA_DEFINE_TRANSFORM_UNARY(Exp, std::exp(x), std::exp(x) * dy, false);
}
#endif
