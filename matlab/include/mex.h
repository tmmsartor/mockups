#ifndef mex_H
#define mex_H


#define SUFFIX(arg) arg ## _730

extern "C"
{
  struct mxArray;



  #include <matrix.h>

  #include <mex_versions.h>

// methods
int mexCallMATLAB(int, mxArray *[], int, mxArray *[], const char *);
mxArray *mexCallMATLABWithTrap(int, mxArray *[], int, mxArray *[], const char *);
void mexWarnMsgIdAndTxt(const char *, const char *, ...);
int mexPrintf(const char*, ...);
void mexLock(void);
int mexAtExit(void (*)(void));

}

#endif // mex_H
