// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Transform__typeof();

struct ICollection__Fuse_Transform
{
    void(*__fp_Add)(void*, ::app::Fuse::Transform*);
    bool(*__fp_Remove)(void*, ::app::Fuse::Transform*);

    static void Add(::uObject* __this, ::app::Fuse::Transform* item) { ((ICollection__Fuse_Transform*)uGetInterfacePtr(__this, ICollection__Fuse_Transform__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static bool Remove(::uObject* __this, ::app::Fuse::Transform* item) { return ((ICollection__Fuse_Transform*)uGetInterfacePtr(__this, ICollection__Fuse_Transform__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
