#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "proc.h"

int
sys_getppid(void)
{
  return myproc()->parent->pid;
}
int
sys_getancestor(void)
{
  int n;
  struct proc *p;
  argint(0, &n);
  if (n<0)
  {
    return -1;
  }
  p = myproc(); 
  while (n>0 && p->parent!=0)
  {
    p = p->parent;
    n--;
  }
  if (n>0)
  {
    return -1;
  }
  
  return p->pid;
}