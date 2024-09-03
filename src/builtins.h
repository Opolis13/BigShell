#pragma once

#include "parser.h"

struct builtin_redir {
  int pseudofd;
  int realfd;
  struct builtin_redir *next;
};

typedef int (*builtin_fn)(struct command *, struct builtin_redir const *redir);

extern builtin_fn get_builtin(struct command *cmd);

