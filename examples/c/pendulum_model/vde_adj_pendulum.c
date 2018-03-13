/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) vde_adj_pendulum_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
#define CASADI_CAST(x,y) (x) y
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[8] = {4, 1, 0, 4, 0, 1, 2, 3};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[5] = {1, 1, 0, 1, 0};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[9] = {5, 1, 0, 5, 0, 1, 2, 3, 4};
#define s2 CASADI_PREFIX(s2)
/* adjFun */
int adjFun(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][1] : 0;
  real_t a1=cos(a0);
  real_t a2=sq(a1);
  real_t a3=1.0000000000000001e-01;
  a2=(a3*a2);
  real_t a4=1.1000000000000001e+00;
  a2=(a4-a2);
  real_t a5=8.0000000000000004e-01;
  a2=(a5*a2);
  real_t a6=arg[1] ? arg[1][3] : 0;
  real_t a7=(a6/a2);
  real_t a8=9.8100000000000005e+00;
  real_t a9=(a8*a7);
  real_t a10=cos(a0);
  a10=(a10*a9);
  a1=(a1+a1);
  a9=cos(a0);
  real_t a11=-8.0000000000000016e-02;
  a9=(a11*a9);
  real_t a12=sin(a0);
  real_t a13=(a9*a12);
  real_t a14=arg[0] ? arg[0][3] : 0;
  real_t a15=sq(a14);
  real_t a16=(a13*a15);
  real_t a17=cos(a0);
  real_t a18=arg[2] ? arg[2][0] : 0;
  real_t a19=(a18*a17);
  a16=(a16+a19);
  a19=sin(a0);
  real_t a20=9.8100000000000009e-01;
  a19=(a20*a19);
  a16=(a16+a19);
  a19=sin(a0);
  a8=(a8*a19);
  a16=(a16+a8);
  a16=(a16/a2);
  a16=(a16/a2);
  a16=(a16*a6);
  a5=(a5*a16);
  a5=(a3*a5);
  a1=(a1*a5);
  a5=sin(a0);
  a5=(a5*a1);
  a10=(a10-a5);
  a5=(a20*a7);
  a1=cos(a0);
  a1=(a1*a5);
  a10=(a10+a1);
  a1=(a18*a7);
  a5=sin(a0);
  a5=(a5*a1);
  a10=(a10-a5);
  a15=(a15*a7);
  a9=(a9*a15);
  a5=cos(a0);
  a5=(a5*a9);
  a10=(a10+a5);
  a12=(a12*a15);
  a12=(a11*a12);
  a15=sin(a0);
  a15=(a15*a12);
  a10=(a10-a15);
  a15=cos(a0);
  a12=(a15+a15);
  a5=sin(a0);
  a5=(a11*a5);
  a9=sq(a14);
  a1=(a5*a9);
  a1=(a1+a18);
  a18=cos(a0);
  a18=(a20*a18);
  a16=sin(a0);
  a6=(a18*a16);
  a1=(a1+a6);
  a15=sq(a15);
  a15=(a3*a15);
  a4=(a4-a15);
  a1=(a1/a4);
  a1=(a1/a4);
  a15=arg[1] ? arg[1][2] : 0;
  a1=(a1*a15);
  a3=(a3*a1);
  a12=(a12*a3);
  a3=sin(a0);
  a3=(a3*a12);
  a10=(a10-a3);
  a15=(a15/a4);
  a18=(a18*a15);
  a4=cos(a0);
  a4=(a4*a18);
  a10=(a10+a4);
  a16=(a16*a15);
  a20=(a20*a16);
  a16=sin(a0);
  a16=(a16*a20);
  a10=(a10-a16);
  a9=(a9*a15);
  a11=(a11*a9);
  a0=cos(a0);
  a0=(a0*a11);
  a10=(a10+a0);
  if (res[0]!=0) res[0][1]=a10;
  a10=arg[1] ? arg[1][0] : 0;
  if (res[0]!=0) res[0][2]=a10;
  a10=(a14+a14);
  a13=(a13*a7);
  a10=(a10*a13);
  a14=(a14+a14);
  a5=(a5*a15);
  a14=(a14*a5);
  a10=(a10+a14);
  a14=arg[1] ? arg[1][1] : 0;
  a10=(a10+a14);
  if (res[0]!=0) res[0][3]=a10;
  a17=(a17*a7);
  a17=(a17+a15);
  if (res[0]!=0) res[0][4]=a17;
  return 0;
}

void adjFun_incref(void) {
}

void adjFun_decref(void) {
}

int adjFun_n_in(void) { return 3;}

int adjFun_n_out(void) { return 1;}

const char* adjFun_name_in(int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

const char* adjFun_name_out(int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

const int* adjFun_sparsity_in(int i) {
  switch (i) {
    case 0: return s0;
    case 1: return s0;
    case 2: return s1;
    default: return 0;
  }
}

const int* adjFun_sparsity_out(int i) {
  switch (i) {
    case 0: return s2;
    default: return 0;
  }
}

int adjFun_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 21;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
