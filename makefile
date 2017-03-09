mastermind: main.o mastermind.o
	g++ main.o mastermind.o

main.o: main.cpp
	g++ -c main.cpp

mastermind.o: mastermind.cpp
	g++ -c mastermind.cpp

clean:
	rm mastermind.o
	rm main.o
