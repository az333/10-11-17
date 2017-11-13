all: args.c
        gcc args.c
run: all
        ./a.out
clean:
        rm *.out
        rm *~
