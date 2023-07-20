#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  //Stack s;
  int i,j, match, close;
  char c;
  for (j=1;j<argc;j++){
    Stack s;
    match=1;
    close=0;
  for(i=0;i<strlen(argv[j]);i++){
    switch(argv[j][i]){
      case '[':
        s.push(argv[j][i]);
        break;
      case '{':
        s.push(argv[j][i]);
        break;
      case '}':
        c=s.pop();
        //break;
      if (c != '{')
        match = 0;
        if (c == 0 ) close=1;
        break;
      case ']':
        c=s.pop();
        //break;
      if (c != '[')
        match = 0;
        if (c == 0 ) close=1;
        break;
      default: break;
    }//end switch
    if (match==0) break;
    if (close==1) break;
  }//end i loop
  if(s.getSize()>0){
    match=0;
  }
  if(match==0){
    cout<<"Parentheses do not match"<<endl;
    if(close==1){
      cout<<"too many close parenthesis"<<endl;
    }
    else if(s.getSize()>0)
      cout<<"too many open parenthesis"<<endl;
    else cout<<endl;
  }
  //else if(s.get_size()>0) //too many open
  //else if() // too close open
  else cout<<"Parentheses match"<<endl;
  }//end j loop
}
   /*for(i=0;i<strlen(argv[1]);i++){
    if (argv[1][i]=='x'){
      //pop
      s.pop();
    }
    else{
      //push it
      s.push(atoi(argv[i]));
    }
  }*/
 /*s.push(5);
  s.push(1);
  s.push(7);
  s.push(6);
  s.pop();//6
  s.pop();//7
  s.push(3);
  s.push(4);
 s.pop();//4
  s.pop();//3
  s.pop();//1
    s.pop();//5
    s.pop();
    s.pop();*/
