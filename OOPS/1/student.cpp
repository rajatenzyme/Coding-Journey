class student
{
    public: 
    int roll;
    private:
    int age;

    public:
        void display()
        {
            cout<<roll<< " "<<age<<" "<<endl;
        }

        void getAge()
        {
            cout<<age<<" ";
        }

        void setAge(int a)
        {
            age = a;
        }

};