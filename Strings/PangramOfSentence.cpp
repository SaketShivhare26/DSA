class Solution {
public:
    bool checkIfPangram(string sentence) {
        // initialising an array to store freq of each char
        int freq[26]={0};
        for(int i=0; i<sentence.length(); i++){
            // storing freq in array
            char ch = sentence[i];
            int index = ch-'a';
            freq[index]++;
        }
        for(int i=0; i<26;i++){
            if(freq[i]==0)
                return false;
        }
        return true;
    }
};

//A pangram is a sentence where every letter of the English alphabet appears at least once.
