#include <iostream>
#include <vector>
using namespace std;

//(1.)  VALID ANAGRAM   [L.C. 242]

bool isAnagram(string s, string t) 
    {
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); i++)
        {
            freqTable[s[i]]++;
        }

        for(int i=0; i<t.size(); i++)
        {
            freqTable[t[i]]--;
        }

        for(int i=0; i<256; i++)
        {
            if(freqTable[i] != 0)   return false;
        }
        return true;
    }




//(2.)  REVERSE ONLY LETTER     [L.C. 917]
string reverseOnlyLetters(string s) 
    {
        int l=0;
        int h=s.size()-1;

        while(l<=h)
        {
            if(isalpha(s[l]) && isalpha(s[h]))
            {
                swap(s[l], s[h]);
                l++, h--;
            }
            else if(!isalpha(s[l]))    l++;
            else    h--;
        }

        return s;
    }





//(3.)    LONGEST COMMON PREFIX     [L.C. 14]

string longestCommonPrefix(vector<string>& strs) 
    {
        string ans;
        int i=0;    //iterate on particular letter(index) of all word
        
        while(true)
        {
            char curr_ch = 0;
            for(auto str : strs)
            {
                if(i >= str.size())  // Out of bound
                {
                    curr_ch = 0;
                    break;
                }

                if(curr_ch == 0)    //just started
                {
                    curr_ch = str[i];
                }
                else if(str[i] != curr_ch)
                {
                    curr_ch = 0;
                    break;
                }
            }
            if(curr_ch == 0)    break;

            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }





//(4.)  REVERSE VOWELS OF STRING    [L.C. 345]

bool isVowel(char ch)
{
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        return true;
    }
    return false;
}

string reverseVowels(string s) 
    {
        int l = 0;
        int h = s.size()-1;

        while(l <= h)
        {
            if( isVowel(s[l]) && isVowel(s[h]) )
            {
                swap(s[l], s[h]);
                l++, h--;
            }
            else if( ! isVowel(s[l]))   l++;
            else    h--;
        }
        
        return s;
    }





//(5.)  ISOMORPHIC STRING    [L.C. 205]
    
bool isIsomorphic(string s, string t) 
    {
        int hash[256] = {0};
        bool isTCharMapped[256] = {0};

        for(int i=0; i<s.size(); i++)
        {
            if(hash[s[i]] == 0  &&  isTCharMapped[t[i]] == 0)
            {
                hash[s[i]] = t[i];
                isTCharMapped[t[i]] = true;
            }
        }

        for(int i=0; i<s.size(); i++)
        {
            if( char( hash[s[i]] )  !=  t[i])  return false;
        }
        
        return true;
    }





//(6.)  REORGANIZE STRING    [L.C. 767]

string reorganizeString(string s) 
    {
        // Count & store occurance of all char
        int hash[26] = {0};
        for(int i=0; i<s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }

        // find the max occurent/frequent char
        char max_freq_char;
        int max_freq = INT_MIN;

        for(int i=0; i<26; i++)
        {
            if(hash[i] > max_freq)
            {
                max_freq_char = i+'a';
                max_freq = hash[i];
            }
        }
        
        //Placing char
           //first place max_freq_char
        int index = 0;
        while(max_freq > 0  &&  index < s.size())
        {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }
        
                // condition when all most_freq_char are not place
        if(max_freq != 0)   return "";

            //place the rest of the char
        hash[max_freq_char - 'a'] = 0;  //because max freq char placed
        
        for(int i=0; i<26; i++)
        {
            while(hash[i] > 0)
            {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }

        return s;
    }






//(7.)  GROUP ANAGRAMS    [L.C. 49]

vector<vector<string>> sorting_method(vector<string>& strs)
{
    map<string, vector<string>> mp;

    //Putting value in map after sorting each element
    for(auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    //Return ans vector
    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it -> second);
    }

    return ans;
}


    std::array<int, 256> hash(string s)
    {
        std::array<int, 256> hash = {0};
        for(int i=0; i<s.size(); i++)
        {
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //return sorting_method(strs);

        map<std::array<int, 256>, vector<string>> mp;

        for(auto str : strs)
        {
            mp[hash(str)].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it -> second);
        }
        
        return ans;
    }

int main()
{


    return 0;
}