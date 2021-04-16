PROJECT_NAME = transformer

BUILD = build

SRC = src/delta_delta.c\
src/delta_grounded_wye.c\
src/single_phase.c\
src/ungrounded_wye_delta.c\
src/wye_grounded_wye.c\

TEST_SRC = test/test_transformer.c\
unity/unity.c\

INC = -Iunity\
-Iinc\

$(PROJECT_NAME):all

.PHONY	: all test coverage run clean doc

all:
	gcc src/main.c $(SRC) $(INC) -o $(PROJECT_NAME).exe

run:$(PROJECT_NAME)
	./${PROJECT_NAME}.exe
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

$(BUILD):
	mkdir build