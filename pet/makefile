myPets: pet.o bird.o cat.o dog.o assign5.o
	c++ pet.o bird.o cat.o dog.o assign5.o -o myGame

assign5.o: assign5.cpp
	c++ -c assign5.cpp

pet.o: pet.cpp pet.h
	c++ -c pet.cpp

bird.o: bird.cpp bird.h
	c++ -c bird.cpp

cat.o: cat.cpp cat.h
	c++ -c cat.cpp

dog.o: dog.cpp dog.h
	c++ -c dog.cpp

clean:
	rm *.o
