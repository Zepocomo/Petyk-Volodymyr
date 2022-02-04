#include "head.h"
bool file_search(const std::string & file, fs::path path)
{
    for (const auto & entry : fs::recursive_directory_iterator(path,
        fs::directory_options::skip_permission_denied)) {
        if (entry.path().filename() == file) {
            return true;
        }
    }
    return false;
}