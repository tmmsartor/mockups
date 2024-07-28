#ifndef engine_H
#define engine_H

extern "C"
{
  typedef struct mxArray_tag mxArray;
  typedef struct engine Engine;

  int engEvalString(Engine *, const char *);
  Engine* engOpenSingleUse(const char *, void *, int *);
  Engine *engOpen(const char *);
  int engClose(Engine *ep);
  mxArray *engGetVariable(Engine *, const char *);
  int engPutVariable(Engine *, const char *, const mxArray *);
  int engOutputBuffer(Engine *, char *, int);

}

#endif // engine_H
