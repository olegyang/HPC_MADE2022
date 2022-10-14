NAME = matmul
FLAGS = -std=c++14
OPT = -O3
DEBUG_FLAG = -g
SRC = main.cpp matmul.cpp matrix.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	g++ $(FLAGS) $(DEBUG_FLAG) $(OPT) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(NAME) $(NAME)_debug
	rm -rf *.o 

run: $(NAME)
	@./$(NAME) 500
	@./$(NAME) 512
	@./$(NAME) 1000
	@./$(NAME) 1024
	@./$(NAME) 2000
	@./$(NAME) 2048
