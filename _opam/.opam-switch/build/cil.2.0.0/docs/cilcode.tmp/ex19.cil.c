/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

#line 1 "cilcode.tmp/ex19.c"
int main(void) 
{ 
  int x ;
  int i ;

  {
#line 2
  i = 0;
#line 2
  while (i < 5) {
#line 3
    if (i == 5) {
#line 3
      goto __Cont;
    }
#line 4
    if (i == 4) {
#line 4
      break;
    }
#line 5
    i += 2;
    __Cont: /* CIL Label */ 
#line 2
    i ++;
  }
#line 7
  while (x < 5) {
#line 8
    if (x == 3) {
#line 8
      continue;
    }
#line 9
    x ++;
  }
#line 11
  return (0);
}
}
