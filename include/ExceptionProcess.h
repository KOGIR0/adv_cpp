#include <exception>
#include <string>

class PipeException : public std::exception
{
public:

    PipeException(const char* msg) : message(msg){} 

    const char* what() const throw()
    {
        return message;
    }

private:
    const char* message;
};

class ForkException : public std::exception
{
public:
    
    const char* what() const throw()
    {
        return "Error forking.";
    }
};

class WriteException : public std::exception
{
public:

    const char* what() const throw()
    {
        return "Error writing.";
    }
};

class ReadException : public std::exception
{
public:

    const char* what() const throw()
    {
        return "Error reading";
    }
};

class ExecException : public std::exception
{
public:
    
    const char* what() const throw()
    {
        return "Error executing.";
    }
};