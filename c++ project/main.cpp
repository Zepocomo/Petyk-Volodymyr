#include "head.h"
int main()
{   
    std::string file("filename.txt");
    
    std::vector<std::future<void>> threads;
    std::for_each(fs::directory_iterator(fs::path("C:/")), {},
        [&threads, &file](const fs::directory_entry & entry) {
            if (fs::is_directory(fs::status(entry))) {
                threads.push_back(std::async(search_thread, file, entry.path()));
            }
        });
        
    std::for_each(threads.begin(), threads.end(), [](decltype(threads)::value_type & f) { f.get(); });
    return 0;
}

