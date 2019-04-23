import numpy as np
import matplotlib.pyplot as plt

euler01 = np.loadtxt("euler_01.dat").T
euler001 = np.loadtxt("euler_001.dat").T
euler1 = np.loadtxt("euler_1.dat").T

implicit01 = np.loadtxt("implicit_01.dat").T
implicit001 = np.loadtxt("implicit_001.dat").T
implicit1 = np.loadtxt("implicit_1.dat").T


plt.figure(figsize=(10,10))
plt.subplot(3,1,1)
plt.plot(euler01[0],euler01[1],label='Euler')
plt.plot(implicit01[0],implicit01[1],label='Implicit')
plt.legend()
plt.title("Paso 0.1")

plt.subplot(3,1,2)
plt.plot(euler001[0],euler001[1],label='Euler')
plt.plot(implicit001[0],implicit001[1],label='Implicit')
plt.legend()
plt.title("Paso 0.01")

plt.subplot(3,1,3)
plt.plot(euler1[0],euler1[1],label='Euler')
plt.plot(implicit1[0],implicit1[1],label='Implicit')
plt.legend()
plt.title("Paso 1")


plt.savefig("resultados.png", bbox_inches='tight')