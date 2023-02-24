#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
   string bracket;
   cout<<"Enter your brackets: ";
   cin>>bracket;

   stack<char> st;

   for( int i=0; i<bracket.size(); i++ ) {

      char ch = bracket[i];

      if( ch == '(' || ch == '{' || ch == '[' )
         st.push( ch );
      else {
         if( st.empty() ) {
            cout<<"No\n";
            return 0;
         }
         if( ( st.top() == '(' && ch == ')' ) || ( st.top() == '{' && ch == '}' ) || ( st.top() == '[' && ch == ']' ) )
            st.pop();
         else {
            cout<<"No";
            return 0;
         }
      }
   }

   if( st.empty() ) {
      cout<<"Yes\n";
   } else {
      cout<<"No\n";
   }
   return 0;
}
