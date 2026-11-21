int main() {
    ClassName obj1;            // calls default constructor
    ClassName obj2(42);        // calls parameterized constructor

    obj1.setValue(10);         // calling member function with dot operator
    int x = obj1.getValue();

    return 0;
}