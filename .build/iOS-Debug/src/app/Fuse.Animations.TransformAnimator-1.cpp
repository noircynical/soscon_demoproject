#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Rotation.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Scaling.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Shear.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Rotation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Scaling.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Shear.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Translation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scaling.h>
#include <app/Fuse.Shear.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimator__Fuse_Rotation__uType* TransformAnimator__Fuse_Rotation__typeof()
{
    static ::uStaticStrong<TransformAnimator__Fuse_Rotation__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimator__Fuse_Rotation__uType*)::uAllocClassType(sizeof(TransformAnimator__Fuse_Rotation__uType), "Fuse.Animations.TransformAnimator<Fuse.Rotation>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))TransformAnimator__Fuse_Rotation__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(TransformAnimator__Fuse_Rotation, _Target));

    return type;
}

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Rotation__CreateState(TransformAnimator__Fuse_Rotation* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::TransformAnimatorState__Fuse_Rotation__New_1(NULL, __this, p);
}

int TransformAnimator__Fuse_Rotation__get_Priority(TransformAnimator__Fuse_Rotation* __this)
{
    return __this->_Priority;
}

::app::Fuse::Node* TransformAnimator__Fuse_Rotation__get_Target(TransformAnimator__Fuse_Rotation* __this)
{
    return __this->_Target;
}

void TransformAnimator__Fuse_Rotation__set_Priority(TransformAnimator__Fuse_Rotation* __this, int value)
{
    __this->_Priority = value;
}

void TransformAnimator__Fuse_Rotation__set_Target(TransformAnimator__Fuse_Rotation* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimator__Fuse_Scaling__uType* TransformAnimator__Fuse_Scaling__typeof()
{
    static ::uStaticStrong<TransformAnimator__Fuse_Scaling__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimator__Fuse_Scaling__uType*)::uAllocClassType(sizeof(TransformAnimator__Fuse_Scaling__uType), "Fuse.Animations.TransformAnimator<Fuse.Scaling>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))TransformAnimator__Fuse_Scaling__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(TransformAnimator__Fuse_Scaling, _Target));

    return type;
}

void TransformAnimator__Fuse_Scaling___ObjInit_2(TransformAnimator__Fuse_Scaling* __this)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);
    __this->MixOp(0);
}

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Scaling__CreateState(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::TransformAnimatorState__Fuse_Scaling__New_1(NULL, __this, p);
}

int TransformAnimator__Fuse_Scaling__get_Priority(TransformAnimator__Fuse_Scaling* __this)
{
    return __this->_Priority;
}

::app::Fuse::Node* TransformAnimator__Fuse_Scaling__get_Target(TransformAnimator__Fuse_Scaling* __this)
{
    return __this->_Target;
}

float TransformAnimator__Fuse_Scaling__get_X(TransformAnimator__Fuse_Scaling* __this)
{
    return __this->_vectorValue.X;
}

void TransformAnimator__Fuse_Scaling__set_Priority(TransformAnimator__Fuse_Scaling* __this, int value)
{
    __this->_Priority = value;
}

void TransformAnimator__Fuse_Scaling__set_Target(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void TransformAnimator__Fuse_Scaling__set_X(TransformAnimator__Fuse_Scaling* __this, float value)
{
    __this->_vectorValue.X = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimator__Fuse_Shear__uType* TransformAnimator__Fuse_Shear__typeof()
{
    static ::uStaticStrong<TransformAnimator__Fuse_Shear__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimator__Fuse_Shear__uType*)::uAllocClassType(sizeof(TransformAnimator__Fuse_Shear__uType), "Fuse.Animations.TransformAnimator<Fuse.Shear>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))TransformAnimator__Fuse_Shear__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(TransformAnimator__Fuse_Shear, _Target));

    return type;
}

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Shear__CreateState(TransformAnimator__Fuse_Shear* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::TransformAnimatorState__Fuse_Shear__New_1(NULL, __this, p);
}

int TransformAnimator__Fuse_Shear__get_Priority(TransformAnimator__Fuse_Shear* __this)
{
    return __this->_Priority;
}

::app::Fuse::Node* TransformAnimator__Fuse_Shear__get_Target(TransformAnimator__Fuse_Shear* __this)
{
    return __this->_Target;
}

void TransformAnimator__Fuse_Shear__set_Priority(TransformAnimator__Fuse_Shear* __this, int value)
{
    __this->_Priority = value;
}

void TransformAnimator__Fuse_Shear__set_Target(TransformAnimator__Fuse_Shear* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformAnimator__Fuse_Translation__uType* TransformAnimator__Fuse_Translation__typeof()
{
    static ::uStaticStrong<TransformAnimator__Fuse_Translation__uType*> type;
    if (type != NULL) return type;

    type = (TransformAnimator__Fuse_Translation__uType*)::uAllocClassType(sizeof(TransformAnimator__Fuse_Translation__uType), "Fuse.Animations.TransformAnimator<Fuse.Translation>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))TransformAnimator__Fuse_Translation__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(TransformAnimator__Fuse_Translation, _Target));

    return type;
}

void TransformAnimator__Fuse_Translation___ObjInit_2(TransformAnimator__Fuse_Translation* __this)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);
    __this->MixOp(0);
}

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Translation__CreateState(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation__New_1(NULL, __this, p);
}

int TransformAnimator__Fuse_Translation__get_Priority(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_Priority;
}

::app::Fuse::Node* TransformAnimator__Fuse_Translation__get_Target(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_Target;
}

float TransformAnimator__Fuse_Translation__get_X(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_vectorValue.X;
}

float TransformAnimator__Fuse_Translation__get_Y(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_vectorValue.Y;
}

void TransformAnimator__Fuse_Translation__set_Priority(TransformAnimator__Fuse_Translation* __this, int value)
{
    __this->_Priority = value;
}

void TransformAnimator__Fuse_Translation__set_Target(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void TransformAnimator__Fuse_Translation__set_X(TransformAnimator__Fuse_Translation* __this, float value)
{
    __this->_vectorValue.X = value;
}

void TransformAnimator__Fuse_Translation__set_Y(TransformAnimator__Fuse_Translation* __this, float value)
{
    __this->_vectorValue.Y = value;
}

}}}
