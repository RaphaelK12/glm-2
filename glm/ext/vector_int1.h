#ifndef GLM_EXT_VECTOR_INT1_H
#define GLM_EXT_VECTOR_INT1_H

#include "../detail/type_vec.h"
#include "../detail/type_vec1.h"

#define glm_ivec1(...) glm_tvec1(int, defaultp, __VA_ARGS__)

#include "vector_bool1.h"
#include "../detail/namespace_begin.inl"

#define L 1
#define T int
#define Q defaultp
#include "../detail/func_vector_common.inl"
#include "../detail/func_vector_trigonometric.inl"
#include "../detail/func_vector_exponential.inl"
#include "../detail/func_vector_relational.inl"
#include "../detail/func_vector_geometric.inl"
#undef L
#undef T
#undef Q

#include "../detail/namespace_end.inl"

#endif /* GLM_EXT_VECTOR_INT1_H */