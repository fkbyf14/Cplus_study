struct FoldConstants : Transformer
{
    Expression *transformNumber(Number const *number)
    {
         Number *t = new Number(number->evaluate());
        return t;
    }

    Expression *transformBinaryOperation(BinaryOperation const *binop)
    {
       BinaryOperation *l =
           dynamic_cast<Number *>(binop->left()->transform(this));
       BinaryOperation *r =
           dynamic_cast<Number *>(binop->right()->transform(this));
        if(typeid(l) == typeid(Number) && typeid(r) == typeid(Number)){
            
            return new BinaryOperation(binop->left()->transform(this)->evaluate(),binop->op

eration()->evaluate(),binop->right()->transform(this)->evaluate());
        }
        delete l;
        delete r;
    }

    Expression *transformFunctionCall(FunctionCall const *fcall)
    {
        FunctionCall *a = dynamic_cast<Number *>(fcall->arg()->transform(this));
        if(typeid(a) == typeid(Number)){
            return new FunctionCall(fcall->name(),fcall->arg()->transform(this)->evaluate());
        }
        delete a;
    }

    Expression *transformVariable(Variable const *var)
    {
        return new Variable(var->name());
    }