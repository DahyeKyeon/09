void square_array(int a[], int size)
{int i;
	for(i=0; i<size; i++)
	a[i]=a[i]*a[i];
}

void print_array(int a[], int size)
{
	int i;
	
	for(i=0; i<size; i++)
		printf("%3d", a[i]);
	printf("\n");
}
