unsigned long fast_fib(unsigned long n) {
  unsigned long fibs[n + 1];
  fibs[0] = 0;
  fibs[1] = 1;
  for(unsigned long i=2; i<=n; i++) {
    fibs[i] = fibs[i-1] + fibs[i-2];
  }
  return fibs[n];
}

unsigned long slow_fib(unsigned long n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return slow_fib(n-1) + slow_fib(n-2);
  }
}

unsigned long fib(unsigned long n) {
  return fast_fib(n);
  /*return slow_fib(n);*/
}

unsigned long main(unsigned long argc, const char *argv[])
{
  unsigned long n = 40;
  printf("Result of fib %lu: %lu\n", n, slow_fib(n));
  return 0;
}

