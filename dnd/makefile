myGame: character.o barbarian.o wizard.o swordmaster.o main01.o
	c++ character.o barbarian.o wizard.o swordmaster.o main01.o -o myGame

main01.o: main01.cpp
	c++ -c main01.cpp

character.o: character.cpp character.h
	c++ -c character.cpp

barbarian.o: barbarian.cpp barbarian.h
	c++ -c barbarian.cpp

swordmaster.o: swordmaster.cpp swordmaster.h
	c++ -c swordmaster.cpp

wizard.o: wizard.cpp wizard.h
	c++ -c wizard.cpp

clean:
	rm *.o
