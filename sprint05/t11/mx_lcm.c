int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    int least = 0;

  if (a == 0 || b == 0)
    return 0;
  if (a < 0)
    a = -a;
  if (b < 0)
    b = -b;

  least = (a * b) / mx_gcd(a, b);
  return least;
}
