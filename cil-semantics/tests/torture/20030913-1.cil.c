/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int glob  ;
void fn2(int **q ) 
{ 

  {
  *q = & glob;
  return;
}
}
void test(void) 
{ int *p ;

  {
  fn2(& p);
  *p = 42;
  return;
}
}
int main(void) 
{ 

  {
  test();
  if (glob != 42) {
    abort();
  }
  exit(0);
}
}