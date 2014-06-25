#include <stdlib.h>
#include <string.h>
#include "mrb_lmdb.h"
#include "mruby/data.h"
#include "mruby/variable.h"
#include "mruby/array.h"
#include "mruby/string.h"
#include "mruby/class.h"
#include "mruby/hash.h"

static mrb_value mrb_lmdb_environment_new(mrb_state *mrb, mrb_value self) {

}

static mrb_value mrb_lmdb_environment_database(mrb_state *mrb, mrb_value self) {

}

static mrb_value mrb_lmdb_environment_info(mrb_state *mrb, mrb_value self) {

}

static mrb_value mrb_lmdb_environment_close(mrb_state *mrb, mrb_value self) {

}

void mrb_mruby_lmdb_gem_init(mrb_state *mrb) {
  struct RClass *lmdb;

  /**
   * Document-Class: LMDB::Environment
   *
   * The Environment is the root object of LMDB operations.
   *
   * An LMDB "environment" is a collection of one or more "databases"
   * (key-value tables), along with transactions to modify those tables,
   * and cursors to iterate over them.
   */

  lmdb = mrb_define_class(mrb, "Lmdb_Environment", mrb->object_class);

  mrb_define_method(mrb, lmdb, "new", mrb_lmdb_environment_new, MRB_ARGS_OPT(1));
  mrb_define_method(mrb, lmdb, "datbase", mrb_lmdb_environment_database, MRB_ARGS_REQ(1));
  mrb_define_method(mrb, lmdb, "close", mrb_lmdb_environment_close, MRB_ARGS_NONE());
  mrb_define_method(mrb, lmdb, "info", mrb_lmdb_environment_info, MRB_ARGS_REQ(1));
}
