class Solution {
public:
    string ReverseSentence(string str) {
    	string t = str;
		if(str == "" || trim(t).size() == 0)
		{
			return str;	
		} 
		stringstream in;
		in.str(str);
        string tmp;
        string res = "";
        if(in >> tmp)
        {
        	res = tmp;
		}
        while(in >> tmp)
        {
        	res = tmp + " " + res;
		}
        return res;
    }
    
 	std::string& trim(std::string &s)   
	{  
	    if (s.empty())   
	    {  
	        return s;  
	    }  
	  
	    s.erase(0,s.find_first_not_of(" "));  
	    s.erase(s.find_last_not_of(" ") + 1);  
	    return s;  
	}  
};