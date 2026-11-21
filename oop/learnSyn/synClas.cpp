class ClassName {
private:
    // data members (hidden from outside)
    int privateVar;

public:
    // constructor
    ClassName() {
        privateVar = 0;
    }

    // parameterized constructor
    ClassName(int value) {
        privateVar = value;
    }

    // member function
    void setValue(int value) {
        privateVar = value;
    }

    int getValue() {
        return privateVar;
    }

    // destructor
    ~ClassName() {
        // cleanup code
    }
};