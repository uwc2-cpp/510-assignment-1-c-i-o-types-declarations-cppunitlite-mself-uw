#include "WFailure.h"

WFailure::WFailure(
    const std::wstring& theCondition,
    const std::string& theFileName,
    long theLineNumber)
    : condition(theCondition),
    fileName(theFileName),
    lineNumber(theLineNumber)
{
}

std::wostream& operator<<(
    std::wostream& stream,
    WFailure& failure)
{
    std::wstring wFileName(failure.fileName.begin(), failure.fileName.end());

    stream << std::endl
           << wFileName
           << L"(" << failure.lineNumber << L") : "
           << L"Failure: "
           << failure.condition;
    return stream;
}
