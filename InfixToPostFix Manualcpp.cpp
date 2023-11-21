#include<iostream>
#include<string.h>
#include<stack>

using namespace std ; 

template <class T > 
class Node 
{	
	public : 
	T data ; 
	Node * next ;
	Node(T a)
	{
		data = a ;
		next = nullptr;
	}
};

template<class T >
class myStack
{
	public : 
	Node <T> * Head ; 
	Node <T> * temp ; 
	myStack()
	{
		Head = nullptr;
	}
	
	void push(T data)
	{
		Node<T> * newn  = new Node<T>(data);
		if (Head == nullptr)
		{
			Head = newn ;
		}
		else 
		{
			temp = Head ; 
			while (temp -> next != nullptr)
			{
				temp = temp -> next ;
			}
			temp -> next = newn;
		}
	}
	void pop()
	{
		temp = Head ; 
		if (Head == nullptr)
		{
			return ; 
		}
		else if (Head -> next == nullptr)
		{
			delete Head;
			Head = nullptr;
		}
		else 
		{
			while (temp -> next -> next != nullptr)
			{
				temp = temp -> next ; 
			}
			delete temp -> next ; 
			temp -> next = nullptr;
		}
	}
	T top()
	{
		temp = Head ; 
		if (Head == nullptr)
		{
			return -1 ; 
		}
		else if (Head -> next == nullptr)
		{
			return Head -> data;
		}
		else 
		{
			while (temp -> next != nullptr)
			{
				temp = temp -> next ; 
			}
			return temp -> data;
		}
	}
	void Display()
	{
		temp = Head ; 
		while (temp  != nullptr)
		{
			cout<<temp -> data <<endl; 
			temp = temp -> next;
		}
		cout<<endl;
	}
	bool empty()
	{
		if (Head == nullptr)
		{
			return true;
		}
		return false;
	}
};

class infixToPostfix
{
	public : 
	string exp ; 
	myStack <char> sobj ; 
	string result ; 

	infixToPostfix(string str)
	{
		exp = str; 
	}

	int prec(char c)
	{
		if (c == '^')return 3 ; 
		else if (c == '/' || c == '*' )return 2 ;
		else if (c == '+' || c == '-') return 1 ; 
		else return -1 ; 
	}

	string convert()
	{

		for (int i = 0 ; i< exp.length() ; i++)
		{
			char c = exp[i];

			if ( ( c >='a' && c <= 'z' ) || (c >= 'A'  && c<='Z') )
			{
				result += c;
			}
			else if (c == '(')
			{
				sobj.push(c);
			}
			else if (c == ')')
			{
				while (sobj.top() != '(')
				{
					result += sobj.top() ; 
					sobj.pop();
				}
				sobj.pop();
			}
			// if character is operator
			else 
			{
				// if precedence is less or ewal then pop it
				while (!sobj.empty() && prec(exp[i]) <= prec(sobj.top())  )
				{
					result += sobj.top() ; 
					sobj.pop();
				}
				// else push it 
				sobj.push(c);
			}

		}
		// on ending string pop all element from the stack;

		while (!sobj.empty())
		{
			result += sobj.top() ; 
			sobj.pop();
		}

		return result;
	}


};

int main(int argc , char * argv[])
{
	string str ; 
	cout<<"Enter Infix Expression : "<<endl;
	cin>>str; 
	infixToPostfix * obj = new infixToPostfix (str); 
	cout<< "Infix To postFix of : " <<str << " is : " << obj -> convert()<<endl;;

	return 0 ; 
}