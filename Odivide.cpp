#include"stdio.h"
#include"iostream.h"
int oc1(int &a,int &b,int &q,int &r)
{
	if(a<b)
	{
		r=a;
		return 0;
	}
	else
	{
		a=a-b;
		q++;
	}
	oc1(a,b,q,r);
}
void oc(int a,int b)
{
	int a1,r,q;
	a1=a;
	q=0;
	r=0;
	oc1(a,b,q,r);
	if(r==0)
		cout<<a1<<'='<<q<<'*'<<b<<endl;
	else
		cout<<a1<<'='<<q<<'*'<<b<<'+'<<r<<endl;
}
void main()
{
	int a,b;
	cin>>a>>b;
	oc(a,b);
}
