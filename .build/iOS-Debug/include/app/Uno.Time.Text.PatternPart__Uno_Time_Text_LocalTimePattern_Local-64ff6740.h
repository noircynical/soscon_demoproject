// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_64FF6740_H__
#define __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_64FF6740_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int;

struct PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType : ::uClassType
{
    ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket __interface_0;
    ::uString*(*__fp_Write)(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*);
};

PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof();

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this);
int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Get(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket);
int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this);
::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this);
bool PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this);
::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this);
void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, int value);
void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value);
void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, bool value);
void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value);
::uString* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);

struct PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int : ::uObject
{
    ::uStrong< ::uDelegate*> _Setter;
    ::uStrong< ::uDelegate*> _Getter;
    int _ExpectedSize;
    bool _Obligatory;

    void _ObjInit() { PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(this); }
    int Get(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket) { return PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Get(this, bucket); }
    int ExpectedSize() { return PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_ExpectedSize(this); }
    ::uDelegate* Getter() { return PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Getter(this); }
    bool Obligatory() { return PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Obligatory(this); }
    ::uDelegate* Setter() { return PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Setter(this); }
    void ExpectedSize(int value) { PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_ExpectedSize(this, value); }
    void Getter(::uDelegate* value) { PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Getter(this, value); }
    void Obligatory(bool value) { PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Obligatory(this, value); }
    void Setter(::uDelegate* value) { PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Setter(this, value); }
    ::uString* Write(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return (((PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType*)this->__obj_type)->__fp_Write)(this, value); }
};

}}}}


#endif
