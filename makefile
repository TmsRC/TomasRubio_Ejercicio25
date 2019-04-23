
all: euler_001.dat euler_01.dat euler_1.dat implicit_001.dat implicit_01.dat implicit_1.dat 

resultados.png: %dat
	python graficar.py 

%.dat: TomasRubio_Ejercicio25.x
	./TomasRubio_Ejercicio25.x

TomasRubio_Ejercicio25.x: TomasRubio_Ejercicio25.cpp
	c++ TomasRubio_Ejercicio25.cpp -o TomasRubio_Ejercicio25.x

clean:
	rm -rf *.x *.dat