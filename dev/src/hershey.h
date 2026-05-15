// hershey.h
// https://www.ks.uiuc.edu/Research/vmd/doxygen/Hershey_8h-source.html
/*
 * Modified Hershey Roman font rendering code.
 *
 * $Id: Hershey.h,v 1.7 2011/02/10 21:22:35 johns Exp $
 */
#ifndef __Hershey_h__
#define __Hershey_h__

/* private handle data structure */
typedef struct {
  float lm;
  float rm;
  const char *p;
} hersheyhandle;

void hersheyDrawLetterOpenGL(unsigned char ch, int drawendpoints);

void hersheyDrawInitLetter(hersheyhandle *hh, const char ch, 
                           float *lm, float *rm);

int hersheyDrawNextLine(hersheyhandle *hh, int *draw, float *x, float *y);

#endif /* __Hershey_h__ */