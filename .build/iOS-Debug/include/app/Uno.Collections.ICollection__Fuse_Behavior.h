// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Behavior__typeof();

struct ICollection__Fuse_Behavior
{
    void(*__fp_Add)(void*, ::app::Fuse::Behavior*);
    int(*__fp_get_Count)(void*);
    bool(*__fp_Remove)(void*, ::app::Fuse::Behavior*);

    static void Add(::uObject* __this, ::app::Fuse::Behavior* item) { ((ICollection__Fuse_Behavior*)uGetInterfacePtr(__this, ICollection__Fuse_Behavior__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static int Count(::uObject* __this) { return ((ICollection__Fuse_Behavior*)uGetInterfacePtr(__this, ICollection__Fuse_Behavior__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Remove(::uObject* __this, ::app::Fuse::Behavior* item) { return ((ICollection__Fuse_Behavior*)uGetInterfacePtr(__this, ICollection__Fuse_Behavior__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
