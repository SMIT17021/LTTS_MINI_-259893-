PROJECT_NAME = transformer

TEST_PROJECT_NAME = test_$(PROJECT_NAME)

BUILD = build

SRC = src/delta_delta.c\
src/delta_grounded_wye.c\
src/Single_Phase.c\
src/ungrounded_wye_delta.c\
src/wye_grounded_wye.c\

TEST_SRC = test/test_transformer.c\
unity/unity.c\

INC = -Iunity\
-Iinc\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif

$(PROJECT_NAME):all

.PHONY	: all test coverage run clean doc

all:
	gcc src/main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_PROJECT_NAME).$(EXEC)
	./$(TEST_PROJECT_NAME).$(EXEC)


run: $(PROJECT_NAME)
	./${PROJECT_NAME}.$(EXEC)
doc:
	make -C documentation

clean:
	$(RM) *.(EXEC)


$(BUILD):
	mkdir build