/*
GOC 2020  question  :  https://www.geeksforgeeks.org/google-online-challenge-2020/
 Given a list which initially contains 0, the following queries can be performed:
0 X: add X to the list
1 X: replace each element “A” of the list by A^X, where ^ is the xor operator.
Return a list with the result elements in increasing order.
*/
#include<iostream>
#include<bits/stdc++.h>
int main()
{   
    int n;   //number of queries
    std::vector<int> initial;
    initial.push_back(0);
    std:: cin >> n;
    for(int i=0; i<n;i++)
    {   int m1,m2;
            std::cin >> m1 >> m2;
        if(m1 == 0)
        {
            initial.push_back(m2);
        }
        else if (m1 == 1)
        {
           for(auto  &j : initial)
           {
                j= (j)^m2;  
           }
        }
    }     
    sort(initial.begin(), initial.end());
    for (auto element : initial)
    {
        printf("%d ", element);
    }
    return 0;
}