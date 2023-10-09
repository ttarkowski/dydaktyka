import numpy as np
import matplotlib.pyplot as p

# Transformacja przekształcająca wektor [x, y] na nowy.
def transformation(c, x, y):
    x_new = c[0] * x[-1] + c[1] * y[-1]
    y_new = c[2] * x[-1] + c[3] * y[-1] + c[4]
    x.append(x_new)
    y.append(y_new)

# Paproć Barnsley'a (fraktal).
def Barnsley(x, y):
    cs = [[ 0.00,  0.00,  0.00,  0.16,  0.00], \
          [ 0.85,  0.04, -0.04,  0.85,  1.60], \
          [ 0.20, -0.26,  0.23,  0.22,  1.60], \
          [-0.15,  0.28,  0.26,  0.24,  0.44]]
    r = np.random.uniform(0,1)
    if r < 0.01:
        transformation(cs[0], x, y)
    elif r < 0.01 + 0.85:
        transformation(cs[1], x, y)
    elif r < 0.01 + 0.85 + 0.07:
        transformation(cs[2], x, y)
    else:
        transformation(cs[3], x, y)

# Rysowanie fraktala.
def fractal(x, y, name):
    figure = p.figure()
    ax = p.gca()
    ax.set_facecolor('black')
    p.scatter(x, y, s=4, lw=0, marker='.')
    figure.savefig(name)

# Tutaj rozpoczynają się obliczenia i rysowanie.
x, y = [0], [0]
for i in range(50000):
    Barnsley(x, y)
fractal(x, y, "Barnsley")
