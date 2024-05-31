// constant members  suffix
// read only memory - can be made class scope by prefixig it with static
class Sample{
    float p;
    const int x = 100;  // can be iitialized here also
    public:
        Sample(): x(200){    // procedure to initialize constant data member
            //
        }
        void get() const;
};
void Sample::get() const{
    // in constant member function it can only modify constant members only
}
// for const member function the memory occupied by invoking object is read only memory
// this pointer would become constant pointer pointing to constant only

// another concept -> mutable data members declared with keyword mutable which is never constant
//

// for constant functions the prototype   =  get(const Sample * const this) 