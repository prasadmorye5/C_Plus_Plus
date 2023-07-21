#include<iostream>
#include<string.h>
void moving(char ch[]){
int i=0;
int n = strlen(ch);

for(int i=0; i<n; i++){
    if(ch[i] == ' '){
        ch[i] = '@';
    }
}
}
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch, 50);

    moving(ch);
    cout<< " this is " << ch << endl;
 return 0;
}