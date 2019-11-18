
/*

LICENSE FOR BHP SU Suite of Programs

The following is the license that applies to the copy of the software hereby
provided to Licensee. BHP's Software Manager may be contacted at the following
address:

Colorado School of Mines
1500 Illinois Street
Golden, Colorado 80401
Attention: John Stockwell
e-mail: john@dix.mines.edu
Telephone: 303-273-3049

Copyright 2001 BHP Software. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software") to deal
in the Software, without restriction, except as hereinafter provided,
including without limitation the rights to use, copy, modify merge,
publish, and distribute the Software and to permit persons
to whom the Software is furnished to do so, provided that the above
copyright notice and this permission notice appear in all copies of the
Software and that both the above copyright notice and this permission
notice appear in supporting documentation. No charge may be made for
any redistribution of the Software, including modified or merged versions
of the Software. The complete source code must be included
in any distribution. For an executable file, complete source code means the
source code for all modules it contains.

Modified or merged versions of the Software must be provided to the Software
Manager, regardless of whether such modified or merged versions are
distributed to others.

THE SOFTWARE IS PROVIDED 'AS IS" WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGMENT OF THIRD PARTY RIGHTS. IN NO EVENT SHALL THE
COPYRIGHT HOLDER INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM OR
ANY SPECIAL INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OF PERFORMANCE OF
THIS SOFTWARE.

The name of the copyright holder shall not be used in advertising or
otherwise to promote the use or other dealings in this Software, without
prior written consent of the copyright holder.

*/
/* Prototypes */
void dtot(int verbose, segy *trin, float *trinr, segy *trout, float *troutr, segy *vin, float *vinr,
          float *tin, float *times, int ntinv, int ntind, int ntout, float dz, float dt, float *rt);
void ttod(int verbose, segy *trin, float *trinr, segy *trout, float *troutr, segy *vin, float *vinr,
          float *din, float *depths, int ntinv, int ntind, int ntout, float dt, float dz, float *rt);
void ttor(int verbose, segy *vin, segy *trout, int ntout);
void rtot(int verbose, segy *vin, segy *trout, int ntout);
void int4(int nin, float xin[], float yin[], float yinl, float yinr,
          int nout, float xout[], float yout[]);
void resamp(float *in, float *out, float dtin, float dtout, int ntin, int ntout, float *rt);

/* Globals */
#define M 1       /* Over-sample multiple */