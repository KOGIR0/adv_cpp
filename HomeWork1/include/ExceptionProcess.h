#include <exception>
#include <string>

class PipeException : public std::exception
{
public:

    PipeException(const std::string msg) : message(msg){} 

    const char* what() const throw()
    {
        return message.c_str();
    }

private:
    std::string message;
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
