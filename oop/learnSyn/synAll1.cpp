// ---- 1. CLASS DECLARATION (global scope or header file) ----
class ClassName {
private:                       // only inside this class
    dataType memberVariable1;

protected:                     // this class + derived classes
    dataType memberVariable3;

public:                        // accessible everywhere
    dataType memberVariable4;

    ClassName();                              // default constructor
    ClassName(dataType param1, dataType p2);  // parameterized constructor
    ClassName(const ClassName &obj);          // copy constructor

    returnType functionName(parameterList);   // member function

    ~ClassName();                             // destructor
};


// ---- 2. FUNCTIONS DEFINED OUTSIDE CLASS (after class, global scope) ----
returnType ClassName::functionName(parameterList) {
    // body
}

ClassName::ClassName() {
    // default constructor body
}

ClassName::ClassName(dataType param1, dataType param2) {
    // parameterized constructor body
}

ClassName::~ClassName() {
    // destructor body
}


// ---- 3. CREATING OBJECTS (inside main() or any function) ----
ClassName obj1;                    // default constructor
ClassName obj2(arg1, arg2);        // parameterized constructor
ClassName obj3 = ClassName(arg1);  // alternate syntax
ClassName obj4 = obj2;             // copy constructor


// ---- 4. ACCESSING OBJECT MEMBERS (dot operator) ----
obj1.memberVariable;
obj1.functionName(args);


// ---- 5. POINTERS TO OBJECTS (inside main() or any function) ----
ClassName* ptr;
ptr = new ClassName();             // heap allocation
ptr = new ClassName(arg1, arg2);

ptr->memberVariable;               // arrow operator
ptr->functionName(args);

delete ptr;                        // free heap memory
ptr = nullptr;


// ---- 6. REFERENCE TO AN OBJECT ----
ClassName& ref = obj1;             // must init immediately
ref.functionName(args);            // uses dot, like normal object


// ---- 7. "this" POINTER (inside member functions only) ----
class ClassName {
    int memberVariable;
public:
    void setValue(int memberVariable) {
        this->memberVariable = memberVariable;  // resolves name clash
    }
};


// ---- 8. STATIC MEMBERS (belong to class, not one object) ----
class ClassName {
public:
    static dataType staticVar;
    static returnType staticFunc();
};

dataType ClassName::staticVar = value;   // defined outside class

ClassName::staticVar;                    // access without an object
ClassName::staticFunc();