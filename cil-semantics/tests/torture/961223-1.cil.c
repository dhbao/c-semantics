/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct s {
   double d ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
__inline struct s sub(struct s s ) 
{ 

  {
  s.d += 1.0;
  return (s);
}
}
int main(void) 
{ struct s t ;

  {
  t.d = 2.0;
  t = sub(t);
  if (t.d != 3.0) {
    abort();
  }
  exit(0);
}
}