#include <stdio.h> 
#include <pthread.h>
static volatile int count = 0;

void * countThread(void *arg) {
  int i;
  for (i = 0; i < 10000000; i++) {
  count = count + 1; }
  return NULL; }
  int
  main(int argc, char *argv[]) {
  pthread_t p1, p2;
  pthread_create(&p1, NULL, countThread, "Thread1"); pthread_create(&p2, NULL, countThread, "Thread2");
  pthread_join(p1, NULL); pthread_join(p2, NULL); printf("count = %d\n", count); return 0;
}
