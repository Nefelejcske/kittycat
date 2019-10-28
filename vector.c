void sum_many(int* a, int* b, int* c, int len)
{
  // Loop can be vectorized
  for(int i = 0; i < len; ++i)
    c[i] = a[i] + b[i];
}

void sum_many_bad(int* a, int* b, int* c, int* len)
{
  // Loop can not be vectorized
  for(int i = 0; i < *len; ++i)
    c[i] = a[i] + b[i];
}
