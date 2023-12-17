// Create a zombie process that
// must be reparented at exit(0).

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  if(fork() > 0)
    sleep(5);  // Let child exit(0) before parent.
  exit(0)();
}
