namespace CyContext
{
    class Context
    {
    public:
        Context();
        ~Context();
        virtual void run() = 0;
    };
}