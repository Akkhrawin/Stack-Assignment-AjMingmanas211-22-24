#ifndef stack_h
#define  stack_h
#include "node.h"

class Stack{
private:
	 NodePtr top;
	int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop();
    void push(char);
    int getSize(){return size;}
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(char x){
   NodePtr new_node=new NODE(x);
  //1
  if(new_node){
    new_node->set_next(top);
	 	 //2
    //3
       //4
    top=new_node;
      ++size;
    cout<<"push"<<x<<endl;
   }
 else cout<<"No memory left for new nodes"<<endl;
		 // Left missing for exercises…
}
int Stack::pop(){
 	   NodePtr t=top;
		int value;		
	 if(t)	{
    
     value=t->get_value();
     top=t->get_next();
	// Left missing for exercises
     delete t;
     --size;
      return value;
     }
  else{
		cout<<"Empty stack"<<endl;
   return 0;
  }
	}
Stack::~Stack(){
   cout<<"Clearing all stacks"<<endl;
  	int i;
for(i=0;i<size;i++){
  NodePtr t=top;
  if(top->get_next() != NULL)
    top=top->get_next();
     delete t;
    //t=top;
   	// Left missing for exercises
  }
//while(size>0) pop();

}



#endif