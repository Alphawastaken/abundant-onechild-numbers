# Abundant & One-Child Numbers

This C program searches numbers up to **10,000,000** and classifies them into:

1. **One-child numbers**: Numbers that have exactly one subsequence divisible by the number of digits.
2. **Abundant numbers**: Numbers where the sum of proper divisors exceeds the number itself.
3. **Both classes**: Numbers that are both abundant and one-child.

The program counts how many numbers fall into each category and prints those that belong to both classes.

---

## Build & Run

```bash
# Compile
make

# Run
./abundant_onechild
```
```sql
104  108  120  ...
Found 12345 one-child numbers
Found 67890 abundant numbers
Found 42 numbers in both classes
```
