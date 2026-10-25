total = 0;
for (i = 0; i < 10; i = i + 1) {
  if (i == 3) {
    continue;
  }
  if (i == 6) {
    break;
  }
  total = total + i;
}
return total;
