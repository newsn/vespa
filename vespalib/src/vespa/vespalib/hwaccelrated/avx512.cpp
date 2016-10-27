// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#include <vespa/vespalib/hwaccelrated/avx512.h>
#include <vespa/vespalib/hwaccelrated/avxprivate.hpp>

namespace vespalib {

namespace hwaccelrated {

float
Avx512Accelrator::dotProduct(const float * af, const float * bf, size_t sz) const
{
    return avx::dotProductSelectAlignment<float, 64>(af, bf, sz);
}

double
Avx512Accelrator::dotProduct(const double * af, const double * bf, size_t sz) const
{
    return avx::dotProductSelectAlignment<double, 64>(af, bf, sz);
}

}
}