// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBu-7a6e09.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket;

struct SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof();

void SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
::uString* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value);

struct SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_2(bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(this, obligatory, show, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif
