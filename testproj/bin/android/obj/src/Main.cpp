#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldType
#include <flash/text/TextFieldType.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","Main.hx",59);
{
	HX_STACK_LINE(60)
	super::__construct();
	HX_STACK_LINE(61)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::added( Dynamic e){
{
		HX_STACK_PUSH("Main::added","Main.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(66)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(67)
		this->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(71)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::init( ){
{
		HX_STACK_PUSH("Main::init","Main.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		if ((this->inited)){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(34)
		this->inited = true;
		HX_STACK_LINE(35)
		::flash::text::TextField lala = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(lala,"lala");
		HX_STACK_LINE(36)
		lala->set_type(::flash::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(37)
		lala->set_width((int)200);
		HX_STACK_LINE(38)
		lala->set_height((int)100);
		HX_STACK_LINE(39)
		::flash::display::Sprite gg = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(gg,"gg");
		HX_STACK_LINE(40)
		gg->get_graphics()->beginFill((int)0,null());
		HX_STACK_LINE(41)
		gg->get_graphics()->drawRect((int)0,(int)0,(int)1,(int)100);
		HX_STACK_LINE(42)
		gg->get_graphics()->drawRect((int)0,(int)0,(int)199,(int)1);
		HX_STACK_LINE(43)
		gg->get_graphics()->drawRect((int)199,(int)0,(int)1,(int)100);
		HX_STACK_LINE(44)
		gg->get_graphics()->drawRect((int)0,(int)99,(int)199,(int)1);
		HX_STACK_LINE(45)
		this->addChild(gg);
		HX_STACK_LINE(46)
		this->addChild(lala);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_PUSH("Main::resize","Main.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(26)
		if ((!(this->inited))){
			HX_STACK_LINE(27)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","Main.hx",76);
		HX_STACK_LINE(78)
		::flash::Lib_obj::get_current()->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(79)
		::flash::Lib_obj::get_current()->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(80)
		::flash::Lib_obj::get_current()->addChild(::Main_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("added"),
	HX_CSTRING("init"),
	HX_CSTRING("resize"),
	HX_CSTRING("inited"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

