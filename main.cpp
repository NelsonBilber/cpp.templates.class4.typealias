#include <iostream>

using namespace std;


const char* GetErrorMeaage(int error){
    return "Empty";
}


//typedef const char*(*PFN)(int);
using PFN = const char *(*)(int);
void ShowError(PFN pfn)
{
    
}

int main() {

    PFN pfn = GetErrorMeaage;
    ShowError(pfn);
       
	return 0;
}
