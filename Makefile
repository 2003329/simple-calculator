project: ./out/main.o ./out/functions.o
	cd out; g++ -o project main.o functions.o;

out/main.o: ./src/main.cpp ./src/class.h
	cd out; g++ -c ../src/main.cpp;

out/functions.o: ./src/functions.cpp ./src/class.h
	cd out; g++ -c ../src/functions.cpp;

clean:
	rm ./out/*.o ./out/project;

run:
	./out/project < ./data/input.dat