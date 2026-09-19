class myQueue {
   private:
       int start;
       int end;
       int current_size;
       int capacity;
       int *arr;
  public:
    myQueue(int n) {
        start=-1;
        end=-1;
        current_size=0;
        capacity=n;
        arr=new int[n];
    }

    bool isEmpty() {
        if(current_size==0){
            return 1;
        }
        return 0;
    }

    bool isFull() {
        if(current_size==capacity){
            return 1;
        }
        return 0;
    }

    void enqueue(int x) {
        if(!isFull()){
            if(current_size==0){
                start=0;
                end=0;
            }else{
            end=(end+1)%capacity;
            }
            arr[end]=x;
            current_size++;
        }
    }

    void dequeue() {
        if(!isEmpty()){
            if(current_size==1){
                start=-1;
                end=-1;
            }else{
            start=(start+1)%capacity;
            }
            current_size--;
        }
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return arr[start];
    }

    int getRear() {
        if(isEmpty()){
            return -1;
        }
        return arr[end];
    }
};
