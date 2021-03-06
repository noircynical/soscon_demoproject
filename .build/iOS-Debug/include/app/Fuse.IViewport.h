// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_VIEWPORT_H__
#define __APP_FUSE_I_VIEWPORT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

::uInterfaceType* IViewport__typeof();

struct IViewport
{
    float(*__fp_get_PointDensity)(void*);
    ::app::Uno::Float2(*__fp_get_Size)(void*);
    ::app::Uno::Float4x4(*__fp_get_ViewProjectionTransform)(void*);
    ::app::Uno::Float4x4(*__fp_get_ViewProjectionTransformInverse)(void*);
    ::app::Uno::Geometry::Ray(*__fp_PointToWorldRay)(void*, ::app::Uno::Float2);

    static float PointDensity(::uObject* __this) { return ((IViewport*)uGetInterfacePtr(__this, IViewport__typeof()))->__fp_get_PointDensity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Uno::Float2 Size(::uObject* __this);
    static ::app::Uno::Float4x4 ViewProjectionTransform(::uObject* __this);
    static ::app::Uno::Float4x4 ViewProjectionTransformInverse(::uObject* __this);
    static ::app::Uno::Geometry::Ray PointToWorldRay(::uObject* __this, ::app::Uno::Float2 pointPos);
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 IViewport::Size(::uObject* __this) { return ((IViewport*)uGetInterfacePtr(__this, IViewport__typeof()))->__fp_get_Size((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float4x4 IViewport::ViewProjectionTransform(::uObject* __this) { return ((IViewport*)uGetInterfacePtr(__this, IViewport__typeof()))->__fp_get_ViewProjectionTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float4x4 IViewport::ViewProjectionTransformInverse(::uObject* __this) { return ((IViewport*)uGetInterfacePtr(__this, IViewport__typeof()))->__fp_get_ViewProjectionTransformInverse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Geometry::Ray IViewport::PointToWorldRay(::uObject* __this, ::app::Uno::Float2 pointPos) { return ((IViewport*)uGetInterfacePtr(__this, IViewport__typeof()))->__fp_PointToWorldRay((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), pointPos); }

}}


#endif
