#ifndef GLM_EXT_TYPE_DOUBLE1_H
#define GLM_EXT_TYPE_DOUBLE1_H

#include "../detail/type_vec.h"
#include "../detail/type_vec1.h"
#define glm_double1(...) glm_tvec1(double, defaultp, __VA_ARGS__)
#define glm_dvec1(...)   glm_tvec1(double, defaultp, __VA_ARGS__)

#include "type_bool1.h"
#include "../detail/namespace_begin.inl"

#define L 1
#define T double
#define Q defaultp
#include "../detail/type_vec1.inl"
#include "../detail/func_vector_common.inl"
#include "../detail/func_vector_trigonometric.inl"
#include "../detail/func_vector_exponential.inl"
#include "../detail/func_vector_rational.inl"
#undef L
#undef T
#undef Q

typedef vec(1, double, defaultp) dvec1;

#include "../detail/namespace_end.inl"

#endif /* GLM_EXT_TYPE_DOUBLE1_H */