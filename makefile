CPP_FILES = $(wildcard source/*.cpp)






build: $(CPP_FILES)
	echo $(CPP_FILES)
	g++ $^ -o prog -g
