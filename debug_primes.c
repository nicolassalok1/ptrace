#include "my_ptrace.h"

/****************** primitives de debug **************/

long activate_debug(void)
{
  //FIXME: appel ? ptrace pour indiquer qu'on veut se faire d?boguer
}

long cont_signal(pid_t pid, int signal)
{
  //FIXME: appel ? ptrace pour continuer l'ex?cution du fils
}

long mem_read(pid_t pid, unsigned addr)
{
  //FIXME: appel ? ptrace pour lire un long dans la m?moire du fils
}

long singlestep(pid_t pid)
{
  //FIXME: appel ? ptrace pour ex?cuter une seule instruction du fils
}

long mem_write(pid_t pid, unsigned addr, long val)
{
  //FIXME: appel ? ptrace pour ?crire un long dans la m?moire du fils
}

long regs_read(pid_t pid, struct user_regs_struct *regs)
{
  memset(regs, 0, sizeof (struct user_regs_struct));
  //FIXME: appel ? ptrace pour r?cup?rer les registres du fils
}

long regs_write(pid_t pid, struct user_regs_struct *regs)
{
  //FIXME: appel ? ptrace pour remplacer les registres du fils
}

