#ifndef CODEGEN_GENLIB_H
#define CODEGEN_GENLIB_H

#include <platform.h>
#include "codegen.h"

PONY_EXTERN_C_BEGIN

bool genlib(compile_t* c, ast_t* program);

PONY_EXTERN_C_END

#endif
