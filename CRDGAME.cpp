#include<iostream>
#include<algorithm>

using namespace std;

void algo(int input[][10], int matches, int *r, int *s){
        int c = 0, m = 0, c_s = 0, m_s =0;
        int chef =0, morty =0;
        int chef_point =0, morty_point=0;
        for(int i =0; i<matches; i++){
            chef = input[i][0]; morty = input[i][1];
            while(chef>0){
                chef_point += chef % 10;
                chef = chef / 10; 
            }
            while(morty>0){
                morty_point += morty % 10;
                morty = morty / 10; 
            }
            if(chef_point>morty_point){
                c_s++;
            }
            else if(morty_point>chef_point){
                m_s++;
            }
            else
            {
                c_s++;
                m_s++;
            }
            
            chef_point = 0;
            morty_point = 0;
            chef = 0;
            morty = 0;
        }
        if(c_s>m_s){
            *s = c_s;
            *r = 0;
        }
        else if(c_s < m_s)
        {
            *s = m_s;
            *r = 1;
        }
        else
        {
            *s = c_s;
            *r = 2;
        } 
}

int main(){
    int testcase; cin>>testcase;
    int foo = testcase;
    int display[testcase][10];
    while (testcase--)
    {
        int result=0 , score=0;
        int n; cin>>n;
        int chef=0, morty=0;
        int input[n][10];
        for(int i=0; i<n;i++)
        {
            for(int k =0; k<2; k++)
            {
            cin>>input[i][k];
            }
        }
        algo(input, n, &result, &score);
       // cout<<result<<score;
        display[testcase][0] = result;
        display[testcase][1] = score;
    }
    while (foo--)
    {
        cout<<display[foo][0]<<' '<<display[foo][1]<<endl;
    }
    
}