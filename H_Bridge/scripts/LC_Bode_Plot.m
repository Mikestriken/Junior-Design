L=2.5e-3
C=2e-6
R=2.2

% LC Network Transfer
lCTransfer = tf([1], [L*C 0 1])

% RLC Network Transfer
rLCTransfer = tf([1], [L*C L/R 1])

% bode(lCTransfer)
grid on

 bode(rLCTransfer)
grid on