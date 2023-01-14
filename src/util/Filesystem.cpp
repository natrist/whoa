#include "BlizzardCore.hpp"
#include "util/Filesystem.hpp"
#include <cstring>
#include <storm/String.hpp>
#include <storm/Error.hpp>

int OsCreateDirectory(const char* pathName, int32_t recursive) {
    if (pathName) {
        return Blizzard::File::CreateDirectory(pathName,recursive != 0) != 0;
    }

    SErrSetLastError(ERROR_INVALID_PARAMETER);
    return 0;
}

void OsBuildFontFilePath(const char* fileName, char* buffer, size_t size) {
    SStrPrintf(buffer, size, "%s\\%s", "Fonts", fileName);
}

char* OsPathFindExtensionWithDot(char* pathName) {
    char* v1;
    char* result;

    v1 = strrchr(pathName, '\\');

    if (!v1) {
        v1 = strrchr(pathName, '/');
    }

    result = strrchr(pathName, '.');

    if (!result || (v1 && v1 >= result)) {
        result = (char*)&pathName[strlen(pathName)];
    }

    return result;
}
