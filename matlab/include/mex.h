#ifndef mex_H
#define mex_H


#ifdef __cplusplus
extern "C" {
#endif

  typedef struct mxArray_tag mxArray;


  #include <matrix.h>

  #include <mex_versions.h>

// methods
int mexCallMATLAB(int, mxArray *[], int, mxArray *[], const char *);
void mexErrMsgIdAndTxt(const char *, const char *, ...);
mxArray *mexCallMATLABWithTrap(int, mxArray *[], int, mxArray *[], const char *);
int mexEvalString(const char *);
void mexWarnMsgIdAndTxt(const char *, const char *, ...);
int mexPrintf(const char*, ...);
void mexLock(void);
int mexAtExit(void (*)(void));
void mexMakeArrayPersistent(mxArray *);

#ifdef __cplusplus
}
#endif

#endif // mex_H
