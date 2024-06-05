class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string result;
        
        for (int i = 0; i < path.size(); ) {
            while (i < path.size() && path[i] == '/') i++; // Skip multiple slashes
            if (i == path.size()) break;
            
            int start = i;
            while (i < path.size() && path[i] != '/') i++;
            string component = path.substr(start, i - start);
            
            if (component == "..") {
                if (!st.empty()) st.pop();
            } else if (component != "." && !component.empty()) {
                st.push(component);
            }
        }
        
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }
        
        return result.empty() ? "/" : result;
    }
};