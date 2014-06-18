final int nthPrime = 10001;

void setup() {
  int current = 0;
  float timer = millis();
  for (int i = 2; true; i++) {
    boolean prime = checkPrime(i);
    if (prime) current++;
    if (current >= nthPrime) {
      current = i;
      break;
    }
  }
  println("10001th prime: " + current + "    Run time: " + timer/1000 + "s");
}

// if n is prime, return true
boolean checkPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
