
class A
{
	int a;

public:
	A()
	{
		cout<<"default A\n";
	}
	A(int a)
	{
		this->a=a;
		cout<<"non-default A = �; 	cout<<a<<endl;
	}
	~A()
	{
		cout<<"destructor A\n";
	}
};
class B:public A
{
	int b;

public:
	B()
	{
		cout<<"default B\n";
	}
	B(int a,int b)
	{
		this->b=b;
		cout<<"non-default B=�; 	cout<<b<<endl;
	}
	~B()
	{
		cout<<"destructor B\n";
	}
};

