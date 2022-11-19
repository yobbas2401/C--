int
int find_total( std::vector<int> my_numbers, int n ) {
	int suma=0;
	for(int i=0; i<n; i++)
	{
	if(my_numbers[i]==8)
	{
	suma+=5;
	}
	else
	{
		if(my_numbers[i]%2==0)
		{
		suma++;
		}
		else
		{
		suma+=3;
		}
	}
	}
	return suma;
}
