#include <stdio.h>
#include <sys/ptrace.h>

int main() {

  if(ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
    puts("You will trace me ;(");
    _exit(1);
  } else {
    puts("You will not trace me :)");
  }
}
