class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        int i = 0; // string s के लिए पॉइंटर
        int j = 0; // string t के लिए पॉइंटर
        
        // जब तक दोनों में से कोई एक स्ट्रिंग खत्म न हो जाए
        while (i < n && j < m) {
            // अगर अक्षर मैच हो जाते हैं, तो s के अगले अक्षर पर जाएँ
            if (s[i] == t[j]) {
                i++;
            }
            // t का पॉइंटर हर हाल में आगे बढ़ेगा ताकि ऑर्डर बना रहे
            j++;
        }
        
        // अगर i पूरी स्ट्रिंग s को पार कर गया, तो मतलब सारे अक्षर सही ऑर्डर में मिल गए
        return (i == n);
    }
};
