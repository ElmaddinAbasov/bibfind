CXX=g++
CXXFLAGS=-Wall -Wextra -std=c++11 -fpermissive
bibfind_system.o:bibfind_system.c
	$(CXX) $(CXXFLAGS) -g -c $< -o $@
db.o:db.c
	$(CXX) $(CXXFLAGS) -g -c $< -o $@	
main:main.c bibfind_system.o db.o
	$(CXX) $(CXXFLAGS) -g -O $^ -o $@

