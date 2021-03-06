#ifndef PROCESS_H
#define PROCESS_H

#include <string>
#include <unistd.h>

class Process
{
public:
	explicit Process(const std::string& path);
	~Process();

	size_t write(const void* data, size_t len);
	void writeExact(const void* data, size_t len);
	size_t read(void* data, size_t len);
	void readExact(void* data, size_t len);

	bool isReadable() const;
	void closeStdin();

	void close();

	void createPipes(int* inProcfd, int* outProcfd);

private:

	void closeFDs(int& fd1, int& fd2);
	pid_t pid;
	int parentToChild;
	int childToParent;
	bool canRead;
};
#endif //PROCESS_H
