
int main() //main has to return int all the time
{
/* ... */
	function_add_numbers(12, 13, 14);
	function_add_numbers(15,16,17);
	int valueA = 90;
	function_add_numbers(valueA,16,17);
    return 0;
}

//This is a function definition


void function_add_numbers(int a, int b, int c)
{
    int sum;
    sum = a+b+c;
    printf("Sum=%d\n", sum);
}
