#ifndef NVIM_LUA_CONVERTER_H
#define NVIM_LUA_CONVERTER_H

#include <lua.h>
#include <stdbool.h>
#include <stdint.h>

#include "nvim/api/private/defs.h"
#include "nvim/func_attr.h"
#include "nvim/eval.h"

typedef struct {
  LuaRef func_ref;
  LuaRef table_ref;
} LuaCallable;

typedef struct {
  LuaCallable lua_callable;
} LuaCFunctionState;

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "lua/converter.h.generated.h"
#endif
#endif  // NVIM_LUA_CONVERTER_H
