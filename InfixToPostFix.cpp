#include<iostream>
#include<string.h>
#include<stack>

using namespace std ; 

class infixToPostfix
{
	public : 
	string exp ; 
	stack <char> sobj ; 
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
	cout<< "Infix To postFix of : " <<str << " is : " << obj -> convert();
	return 0 ; 
}