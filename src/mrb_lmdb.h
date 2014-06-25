#ifndef MRB_LMDB_H
#define MRB_LMDB_H

#include "mruby.h"
#include "liblmdb/lmdb.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

void mrb_mruby_lmdb_gem_init(mrb_state *mrb);

#endif
