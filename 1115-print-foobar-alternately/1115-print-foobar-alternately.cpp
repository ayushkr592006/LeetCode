class FooBar {
mutex m;
condition_variable cv;
int turn;


private:
    int n;

public:
    FooBar(int n) {
        this->n = n;
        turn=0;
    }

    void foo(function<void()> printFoo) {
      

        for (int i = 0; i < n; i++) {
              unique_lock<mutex>lock(m);
       while(turn%2!=0){
        cv.wait(lock);
       }
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            turn++;
            cv.notify_all();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
             unique_lock<mutex>lock(m);
       while(turn%2==0){
        cv.wait(lock);
       }
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            turn++;
            cv.notify_all();
        }
    }
};