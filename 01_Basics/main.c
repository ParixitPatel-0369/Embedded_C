
int y=3;
void swap(int *,int *);
int main()
{
	
	int x=10;
	x=x<<1;
	swap(&x,&y);
	return 0;
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
