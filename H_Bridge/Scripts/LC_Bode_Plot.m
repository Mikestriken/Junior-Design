L=2.5e-3
C=2e-6

num = [1]
den = [L*C 0 1]

G = tf(num, den)

bode(G)
grid on