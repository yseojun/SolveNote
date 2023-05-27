#include <iostream>
using namespace std;
class Tree
{
	public:
		char name;
		Tree	*l;
		Tree	*r;
		Tree(char n)
		{
			name = n;
			l = 0;
			r = 0;
		};
		Tree	*find(Tree *i, char n)
		{
			if (i == 0)
				return 0;
			if (i->name == n)
				return i;
			Tree	*a;
			a = find(i->l, n);
			if (a == 0)
				a = find(i->r, n);
			return a;
		}
		void	prt_first(Tree *i)
		{
			if (i == 0)
				return ;
			cout << i->name;
			prt_first(i->l);
			prt_first(i->r);
		}
		void	prt_back(Tree *i)
		{
			if (i == 0)
				return ;
			prt_back(i->l);
			prt_back(i->r);
			cout << i->name;
		}
		void	prt_mid(Tree *i)
		{
			if (i == 0)
				return ;
			prt_mid(i->l);
			cout << i->name;
			prt_mid(i->r);
		}
};

int main()
{
	int n;
	cin >> n;
	
	Tree *top = 0;
	for (int i = 0; i < n; i++)
	{
		char pn,ln,rn;
		Tree	*p = 0;
		Tree	*l = 0;
		Tree	*r = 0;
		cin >> pn >> ln >> rn;
		p = p->find(top, pn);
		if (p == 0)
		{
			p = new Tree(pn);
			if (pn == 'A')
				top = p;
		}
		if (ln != '.' && p->l == 0)
			p->l = new Tree(ln);
		if (rn != '.' && p->r == 0)
			p->r = new Tree(rn);
	}
	top->prt_first(top);
	cout << endl;
	top->prt_mid(top);
	cout << endl;
	top->prt_back(top);
}