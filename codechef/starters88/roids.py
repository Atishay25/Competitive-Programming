MOD = 1000000007

n = int(input())
asteroids = []
for i in range(n):
    x, y = map(int, input().split())
    asteroids.append((x, y))

asteroids.sort()  # Sort by x-coordinate

p = [0] * (n+1)
p[n] = 1  # Base case

for i in range(n-1, -1, -1):  # Calculate p(i) for i = n-1, n-2, ..., 1
    if asteroids[i][0] == asteroids[i+1][0]:  # Same x-coordinate as next asteroid
        p[i] = p[i+1]
    else:
        j = i+1  # Index of asteroid with minimum x-coordinate among the remaining non-destroyed asteroids
        d = asteroids[j][0] - asteroids[i][0]  # Difference in x-coordinates
        s = 0  # Sum of p(k) for j+1 <= k <= i-1
        for k in range(j, i):
            s = (s + p[k]) % MOD
        p[i] = ((1 - p[j]) * (s + 1) * pow(d, MOD-2, MOD)) % MOD

print((p[0] * pow(n, MOD-2, MOD)) % MOD)
