// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Controls_TextEdit_LineCacheLine;

struct List__Fuse_Controls_TextEdit_LineCacheLine__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_TextEdit_LineCacheLine __interface_0;
};

List__Fuse_Controls_TextEdit_LineCacheLine__uType* List__Fuse_Controls_TextEdit_LineCacheLine__typeof();

::uObject* List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator_boxed(List__Fuse_Controls_TextEdit_LineCacheLine* __this);
void List__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(List__Fuse_Controls_TextEdit_LineCacheLine* __this);
void List__Fuse_Controls_TextEdit_LineCacheLine__Add(List__Fuse_Controls_TextEdit_LineCacheLine* __this, ::app::Fuse::Controls::TextEdit::LineCacheLine* item);
void List__Fuse_Controls_TextEdit_LineCacheLine__BoundsCheck(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index);
void List__Fuse_Controls_TextEdit_LineCacheLine__EnsureCapacity(List__Fuse_Controls_TextEdit_LineCacheLine* __this);
int List__Fuse_Controls_TextEdit_LineCacheLine__get_Count(List__Fuse_Controls_TextEdit_LineCacheLine* __this);
::app::Fuse::Controls::TextEdit::LineCacheLine* List__Fuse_Controls_TextEdit_LineCacheLine__get_Item(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator(List__Fuse_Controls_TextEdit_LineCacheLine* __this);
void List__Fuse_Controls_TextEdit_LineCacheLine__Insert(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* item);
List__Fuse_Controls_TextEdit_LineCacheLine* List__Fuse_Controls_TextEdit_LineCacheLine__New_1(::uStatic* __this);
void List__Fuse_Controls_TextEdit_LineCacheLine__RemoveAt(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index);
void List__Fuse_Controls_TextEdit_LineCacheLine__set_Item(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* value);

struct List__Fuse_Controls_TextEdit_LineCacheLine : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(this); }
    void Add(::app::Fuse::Controls::TextEdit::LineCacheLine* item) { List__Fuse_Controls_TextEdit_LineCacheLine__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Controls_TextEdit_LineCacheLine__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Controls_TextEdit_LineCacheLine__EnsureCapacity(this); }
    int Count() { return List__Fuse_Controls_TextEdit_LineCacheLine__get_Count(this); }
    ::app::Fuse::Controls::TextEdit::LineCacheLine* Item(int index) { return List__Fuse_Controls_TextEdit_LineCacheLine__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine GetEnumerator();
    void Insert(int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* item) { List__Fuse_Controls_TextEdit_LineCacheLine__Insert(this, index, item); }
    void RemoveAt(int index) { List__Fuse_Controls_TextEdit_LineCacheLine__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* value) { List__Fuse_Controls_TextEdit_LineCacheLine__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List__Fuse_Controls_TextEdit_LineCacheLine::GetEnumerator() { return List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator(this); }

}}}


#endif
