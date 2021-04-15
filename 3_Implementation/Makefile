PROJECT_NAME = TRANSFORMER.exe

SRC = unity/unity.c\
src/delta_delta.c\
src/delta_grounded_wye.c\
src/single_phase.c\
src/ungrounded_wye_delta.c\
src/wye_grounded_wye.c\
test/test_transformer.c\
src/main.c

INC = -Iunity\
-Iinc

.PHONY	: all test coverage run clean doc

all:$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/factorial.c main.c