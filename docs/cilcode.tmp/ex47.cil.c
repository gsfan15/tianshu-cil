/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

#line 1 "cilcode.tmp/ex47.c"
static int bar(int x , char y ) 
{ 


  {
#line 2
  return (x + (int )y);
}
}
#line 6 "cilcode.tmp/ex47.c"
int foo(int x , char y ) 
{ 
  int tmp ;

  {
#line 6
  tmp = bar(x, y);
#line 6
  return (tmp);
}
}
