#define max 4
int top=-1, arr[max];


int isEmpty(){
    if(top==-1)
        return 1;
    return 0;    
}

int isFull(){
    if(top==max-1)
        return 1;
    return 0;    
}


void push(int item){
    if(isFull()){
        printf("Stack is full!!");
    }
    else{
        top=top+1;
        arr[top]=item;
    }
}


int pop(){
    if(isEmpty()){
        printf("Stack is empty!!");
    }
    else{
        int p=arr[top];
        top=top-1;
        return p;
    }
}


void display(){
    if(isEmpty()){
        printf("Stack is empty!!");
    }
    else{
        for (int i = 0; i <= top; i++){
            printf("%d\n", arr[i]);
        }
        
    }
}


