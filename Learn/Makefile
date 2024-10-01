NAME_BUOI := File
PATH_OUTPUT := ./$(NAME_BUOI)/out
SRC_DIRS = $(NAME_BUOI)/src

OPT_FILE := VD_4

#Source file
#SRC_FILES := $(foreach SRC_DIRS,$(SRC_DIRS),$(wildcard $(SRC_DIRS)/*))

CC := g++

.PHONY: build
build: $(SRC_DIRS)/$(OPT_FILE).cpp
	@$(CC) $^ -o $(PATH_OUTPUT)/$(OPT_FILE).exe
	@echo "Build Done!"
	
.PHONY: run
run: $(PATH_OUTPUT)/$(OPT_FILE).exe
	@$^

.PHONY: clean
clean: 
	@rm ./$(PATH_OUTPUT)/*
	@echo "Clean all output file!"

print-%:
	@echo $($(subst print-,,$@))