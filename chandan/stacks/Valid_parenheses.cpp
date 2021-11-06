class Solution {
public:
    bool isValid(string s) {
         stack<char> bracket;              // Stack to store opening braces in the string
        char topE;
        for(int i=0;i<s.length();i++){
            if( s[i] == '(' || s[i] == '{' || s[i] == '[' ){  // Store opening braces
                bracket.push(s[i]);
            }
            else{
                if(bracket.empty())     // If stack is empty then there was a closing brace before an opening brace
                    return false;
                topE = bracket.top();   // Get the innermost opening brace
                bracket.pop();
                if( topE == '{' && s[i]!='}')   // Return false if no corresponding closing brace
                    return false;
                if( topE == '[' && s[i]!=']')
                    return false;
                if( topE == '(' && s[i]!=')')
                    return false;
            }
        }
        return bracket.empty();    
        
    }
};