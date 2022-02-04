#include "head.h" 
void search_thread(const std::string & file, fs::path path)
{
    bool result = false;
    try {
        result = file_search(file, path);
    } catch (fs::filesystem_error & err) { }
    if (result) std::cout << "Found!";
}