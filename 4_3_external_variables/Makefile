CC = gcc
OBJS = reverse_polish_calculator.o push_pop.o get_unget.o getop.o calc.h
reverse_polish: $(OBJS)
	$(CC) $(OBJS) -o reverse_polish

reverse_polish_calculator.o: reverse_polish_calculator.c calc.h
	$(CC) -c reverse_polish_calculator.c
push_pop.o: push_pop.c calc.h
	$(CC) -c push_pop.c
get_unget.o: get_unget.c calc.h
	$(CC) -c get_unget.c
getop.o: getop.c calc.h
	$(CC) -c getop.c
clean:
	rm -f $(OBJS) reverse_polish
	
