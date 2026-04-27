class DynamicArray {
public:
    int size;
    int* arr;
    int max_capacity;
    DynamicArray(int capacity) {
        arr = new int[capacity];
        size=0;
        max_capacity=capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i]=n;
    }

    void pushback(int n) {
        if(size==max_capacity){
            resize();
        }
        arr[size]=n;
        size++;
    }

    int popback() {
        if (size > 0) {
            // soft delete the last element
            size--;
        }
        return arr[size];
    }

    void resize() {
        max_capacity=max_capacity*2;
        int* tmp=arr;
        arr = new int[max_capacity];
        for(int i=0;i<size;i++){
            arr[i]=tmp[i];
        }
        delete tmp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return max_capacity;
    }
};
