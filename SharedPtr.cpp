struct Expression;
struct Number;
struct BinaryOperation;
struct FunctionCall;
struct Variable;

struct SharedPtr
{
    
    explicit SharedPtr(Expression *ptr = 0){
        this->ptr_=ptr;
        int count = 0;
        if(ptr_!=0)
            count = 1;
    }
    ~SharedPtr(){
     if(ptr_!=0)
         delete ptr_;
    }
    SharedPtr(const SharedPtr &){
        if(ptr_!=0)
            count++;
    }
    SharedPtr& operator=(const SharedPtr &){
        
    }
       Expression* get() const{
       return ptr_;
   }
    void reset(Expression *ptr = 0){
        count--;
        if(count==0){
        delete ptr_;
        }
        ptr_ = ptr;
    }
   
       Expression& operator*() const{
       return *ptr_;
   }
    Expression* operator->() const{
        return ptr_;
    }
};