#makefile
S5C1PLOT.pdf: x.dat cos.dat derivada.dat plotsS5C1.py S5C1Deriv.cpp
	python plotsS5C1.py
%.dat: a.out
	./a.out
a.out: S5C1Deriv.cpp
	g++ S5C1Deriv.cpp
   