import numpy as np
import matplotlib.pylab as plt

datos= np.genfromtxt("x.dat")
datos2=np.genfromtxt("cos.dat")
datos3=np.genfromtxt("derivada.dat")

x=datos[1:]
arrcos=datos2[1:]
deriv=datos3[2:]

plt.figure()
plt.plot(x,deriv, color= 'r', label="F'(x)")
plt.plot(x,arrcos, color= 'g', label= 'F(x)')
plt.legend()
plt.title("f(x) y f'(x)")
plt.xlabel("x")
plt.ylabel("F(x),F'(x)")
plt.savefig("S5C1PLOT.png")