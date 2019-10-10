SRCS := $(wildcard *.cpp)
APPS := $(SRCS:%.cpp=%)

.PHONY: all
all: $(APPS)

%: %.cpp
	g++ -Wall -o $(@) $(<)

.PHONY: clean
clean:
	rm -f $(APPS)
