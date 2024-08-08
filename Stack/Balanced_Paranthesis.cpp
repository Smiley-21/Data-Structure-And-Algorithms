#include <iostream>
#include <stack>
using namespace std;

bool BalancedParanthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {

        if ((s[i] == '{'))
        {
            st.push('{');
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i]=='[')
        {
            st.push('[');
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
                return false;
        }
        else if (s[i] == ')')
        {

            if (st.top() == '(')
            {
                st.pop();
            }
            else
                return false;
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
                return false;
        }
    }
    return true;
}

int main()
{ string s="{[()]}";
cout<<BalancedParanthesis(s);

    return 0;
}
