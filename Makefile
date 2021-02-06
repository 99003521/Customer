#make file for:
# 1. Compiling
# 2. Running gtest
# 3. Executing the compiled files
# 4. Cleaning the ".out"(object) file  
src = customer.cpp customer_test.cpp
project = customer
customer: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: customer
	./$^
clean:
	rm *.out