OUT = $(shell ls src/main/ | sed s/.cpp// )
LIBS = $(wildcard src/libs/*.cpp)

default:
	g++ src/main/*.cpp $(LIBS) -o build/$(OUT)
	chmod +x build/$(OUT)

clean:
	rm -rfv build/*
