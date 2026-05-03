class Solution {
public:
    int secondHighest(string s) {
        int largest = -1 , slargest = -1;
        int i = 0 , j= s.length()-1;

        while(i<=j)
        {
            int si = int(s[i]);
            int sj = int(s[j]);

            while((si<48 || si>57) && i<=j)
            {
                i++;
                si = int(s[i]);
            }
            while((sj<48 || sj>57) && i<=j)
            {
                j--;
                sj = int(s[j]);
            }
            if((si >= 48 && si<=57) && (sj >= 48 && sj<=57)) 
            {
                si = si - 48;
                sj = sj - 48;
                
                if(si == sj)
                {
                    if(si>largest)
                    {
                        slargest = largest;
                        largest = si;
                    }
                    else if(si<largest)
                    {
                        if(si>slargest)
                        {
                            slargest = si;
                        }
                    }
                }
                else if(sj>si)
                {
                    if(sj>largest)
                    {
                        slargest = largest;
                        largest = sj;
                        if(slargest < si)
                        {
                            slargest = si;
                        }
                    }
                    else if(sj<largest)
                    {
                        if(sj>slargest)
                        {
                            slargest = sj;
                        }
                    }
                }
                else if(si>sj)
                {
                    if(si>largest)
                    {
                        slargest = largest;
                        largest = si;
                        if(slargest < sj)
                        {
                            slargest = sj;
                        }
                    }
                    else if(si<largest)
                    {
                        if(si>slargest)
                        {
                            slargest = si;
                        }
                    }
                }
            }
            i++;
            j--;
        }
        return slargest;
    }
};