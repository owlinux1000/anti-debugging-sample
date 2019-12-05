#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/prctl.h>

int main(int argc, char **argv) {
  setbuf(stdout, NULL);
  printf("My name is %s and PID is %d", argv[0], getpid());
  prctl(PR_SET_NAME, "fake!!!");
  strncpy(argv[0], "fake!!!", 7);
  for(;;) sleep(1);
}
