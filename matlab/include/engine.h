#ifndef engine_H
#define engine_H
#include "eng_Export.h"

extern "C"
{
  typedef struct mxArray_tag mxArray;
  typedef struct engine Engine;

  eng_Export int engEvalString(Engine *, const char *);
  eng_Export Engine* engOpenSingleUse(const char *, void *, int *);
  eng_Export Engine *engOpen(const char *);
  eng_Export int engClose(Engine *ep);
  eng_Export mxArray *engGetVariable(Engine *, const char *);
  eng_Export int engPutVariable(Engine *, const char *, const mxArray *);
  eng_Export int engOutputBuffer(Engine *, char *, int);

}

#endif // engine_H
