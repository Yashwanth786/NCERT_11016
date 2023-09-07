from scipy.stats import bernoulli
import numpy as np

# Simulating random outcomes
x1 = bernoulli.rvs(size=10000, p=1/6)
x2 = bernoulli.rvs(size=10000, p=1/6)
x3 = bernoulli.rvs(size=10000, p=1/6)

# Counting occurrences of each outcome
c1 = np.count_nonzero(x1 == 1)
c2 = np.count_nonzero(x2 == 1)
c3 = np.count_nonzero(x3 == 1)
c4 = np.count_nonzero((x1 == 0) & (x2 == 0) & (x3 == 0))

# Calculating probabilities
p1 = c1 / 10000
p2 = c2 / 10000
p3 = c3 / 10000
p4 = c4 / 10000

# Calculating expected money using probabilities
money = (p1 * 1) + (p2 * 0) + (p3 * (-1)) + (p4 * (-3))
print(money)

