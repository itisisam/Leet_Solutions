class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        int n = digits.size();

        vector<string> word = {"abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

        // for 2 length

        vector<string>ans;
    
        if(n == 2)
        {
            string s1 = word[digits[0]-'2'];

            string s2 = word[digits[1]-'2'];

            string result = "";

            for(int i=0;i<s1.size();i++)
            {   
                result = s1[i];

                for(int j=0;j<s2.size();j++)
                {
                    result += s2[j];
                    ans.push_back(result);
                    result.pop_back();
                }
            }
        }



        else if(n == 3)
        {
            string s1 = word[digits[0]-'2'];
            
            string s2 = word[digits[1]-'2'];

            string s3 = word[digits[2]-'2'];

            string result = "";

            for(int i=0;i<s1.size();i++)
            {   
                result = s1[i];

                for(int j=0;j<s2.size();j++)
                {
                    result += s2[j];

                    for(int k=0;k<s3.size();k++)
                    {
                        result += s3[k];
                        ans.push_back(result);
                        result.pop_back();
                    }

                    result.pop_back();
                }

            }
        }

        else if(n == 4)
        {
            string s1 = word[digits[0]-'2'];

            string s2 = word[digits[1]-'2'];
            
            string s3 = word[digits[2]-'2'];
            
            string s4 = word[digits[3]-'2'];
            
            string result = "";

            for(int i=0;i<s1.size();i++)
            {   
                result = s1[i];

                for(int j=0;j<s2.size();j++)
                {
                    result += s2[j];

                    for(int k=0;k<s3.size();k++)
                    {
                        result += s3[k];

                        for(int l=0;l<s4.size();l++)
                        {
                            result += s4[l];
                            ans.push_back(result);
                            result.pop_back();
                        }

                        result.pop_back();
                    }

                    result.pop_back();
                }

            }
        }
        else
        {
            string s1 = word[digits[0] - '2'];

            string result = "";

            for(int i=0;i<s1.size();i++)
            {
                result = s1[i];
                ans.push_back(result);
            }
        }
        
        return ans;
    }
};