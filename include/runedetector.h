#ifndef __RUNEDETECTOR_H__
#define __RUNEDETECTOR_H__

#include <filesystem>
namespace fs = std::filesystem;
 
void detect_rune(const fs::path& rune, const fs::path& image);


#endif // __RUNEDETECTOR_H__



