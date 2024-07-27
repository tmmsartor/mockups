#include "engine.h"

extern "C"
{
  typedef struct mxArray_tag mxArray;
  typedef struct engine Engine;

  int engEvalString(Engine *, const char *) { return 0; }
  Engine* engOpenSingleUse(const char *, void *, int *) { return 0; }
  Engine *engOpen(const char *) { return 0; }
  int engClose(Engine *ep) { return 0; }
  mxArray *engGetVariable(Engine *, const char *) { return 0; }
  int engPutVariable(Engine *, const char *, const mxArray *) { return 0; }
  int engOutputBuffer(Engine *, char *, int) { return 0; }
}
