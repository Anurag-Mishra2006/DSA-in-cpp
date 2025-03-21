class MyQueue {
    public:
        int end, start;
        int arr[200];
    
        MyQueue() {
            start = 0;
            end = 0;
        }
        
        void push(int x) {
            if (end >= 200) return; // Avoid overflow
            arr[end] = x;
            end++;
        }
        
        int pop() {
            if (empty()) return -1; 
            int val = arr[start]; 
            start++;
            if (start == end) {
                start = 0;
                end = 0;
            }
            return val;
        }
        
        int peek() {
            if (empty()) return -1;  
            return arr[start];
        }
        
        bool empty() {
            return (start == end);  
        }
    };
    