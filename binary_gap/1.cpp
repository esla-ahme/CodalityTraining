#include <bits/stdc++.h>


int solution(int N) {

    int count = 0;
    int temp = 0;
    bool flag = false;
    bitset<32> bs(N);
    
    while(bs.any())
    {
        if(!bs.test(0))
            if (flag) temp++;
       
	else 
        {
            count = (temp>count)? temp:count;
            temp = 0;
            flag = true;
        }
        bs >>=1;        
    }
    return count;
}
