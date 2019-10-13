#include<stdio.h>

int pop(int st[], int *top){
  int val;
  if(*top == -1){
     printf("Underflow");
     return -1;
  }
  else{
    val = st[*top];
    (*top)--;
    return val;
  }
}
void push(int st[], int *top, int val){
  if(*top == 4){
    printf("Overflow");
  }
  else{
    (*top)++;
    st[*top] = val;
  }
}

void main(){
  int i, inp[5], x, s, top_i = -1, temp[5], top_t = -1, res[5], top_r = -1;
  printf("Enter 5 elements:\n");
  printf("Enter item 0\n", i);
  scanf("%d", &x);
  s = x;
  push(inp, &top_i, x);
  for(i = 1;i < 5;i++){
    printf("Enter item %d\n", i);
    scanf("%d", &x);
    if(x < s)
      s = x;
    push(inp, &top_i, x);
  }
  while(top_i != -1){
    x = pop(inp, &top_i);
    if(x == s){
      push(res, &top_r, x);
    }
    else{
      push(temp, &top_t, x);
    }
  }
  while(top_t != -1){
    x = pop(temp, &top_t);
    push(res, &top_r, x);
  }
  for(i = 4;i >= 0;i--){
    printf("%d\n", res[i]);
  }
}

