string Solution::intToRoman(int A) {
    
    
    
    map<int , string> roman_mp;
    
    roman_mp.insert({1, "I"});
    roman_mp.insert({4, "IV"});
    roman_mp.insert({5, "V"});
    roman_mp.insert({9, "IX"});
    roman_mp.insert({10, "X"});
    roman_mp.insert({40, "XL"});
    roman_mp.insert({50, "L"});
    roman_mp.insert({90, "XC"});
    roman_mp.insert({100, "C"});
    roman_mp.insert({400, "CD"});
    roman_mp.insert({500, "D"});
    roman_mp.insert({900, "CM"});
    roman_mp.insert({1000, "M"});

    string res;
    
    for(auto itr = roman_mp.rbegin(); itr != roman_mp.rend(); itr++)
    {
        while(A >= itr -> first)
        {
            res += itr -> second;
            A -= itr -> first;   
        }
        
        if(A <= 0)
            break;
    }
    
    return res;
    
    
    
    
    
    
    
    
    
    
    
    
}

