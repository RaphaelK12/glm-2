#ifndef GLM_EXT_VECTOR_BOOL4_H
#define GLM_EXT_VECTOR_BOOL4_H

#include "../detail/type_vec.h"
#include "../detail/type_vec4.h"

#define glm_bvec4(...) glm_tvec4(bool, defaultp, __VA_ARGS__)

#include "../detail/namespace_begin.inl"
#include "vector_bool4.c"
#include "../detail/namespace_end.inl"

#endif /* GLM_EXT_VECTOR_BOOL4_H */