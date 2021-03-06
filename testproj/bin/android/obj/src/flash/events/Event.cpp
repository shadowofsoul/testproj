#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventPhase
#include <flash/events/EventPhase.h>
#endif
namespace flash{
namespace events{

Void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("Event::new","flash/events/Event.hx",51);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(53)
	this->__type = type;
	HX_STACK_LINE(54)
	this->__bubbles = bubbles;
	HX_STACK_LINE(55)
	this->__cancelable = cancelable;
	HX_STACK_LINE(56)
	this->__isCancelled = false;
	HX_STACK_LINE(57)
	this->__isCancelledNow = false;
	HX_STACK_LINE(58)
	this->__target = null();
	HX_STACK_LINE(59)
	this->__currentTarget = null();
	HX_STACK_LINE(60)
	this->__eventPhase = ::flash::events::EventPhase_obj::AT_TARGET;
}
;
	return null();
}

Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Event_obj::get_type( ){
	HX_STACK_PUSH("Event::get_type","flash/events/Event.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_LINE(137)
	return this->__type;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_type,return )

Dynamic Event_obj::set_target( Dynamic value){
	HX_STACK_PUSH("Event::set_target","flash/events/Event.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(136)
	return this->__target = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_target,return )

Dynamic Event_obj::get_target( ){
	HX_STACK_PUSH("Event::get_target","flash/events/Event.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->__target;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_target,return )

::flash::events::EventPhase Event_obj::get_eventPhase( ){
	HX_STACK_PUSH("Event::get_eventPhase","flash/events/Event.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_LINE(134)
	return this->__eventPhase;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_eventPhase,return )

Dynamic Event_obj::set_currentTarget( Dynamic value){
	HX_STACK_PUSH("Event::set_currentTarget","flash/events/Event.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(133)
	return this->__currentTarget = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_currentTarget,return )

Dynamic Event_obj::get_currentTarget( ){
	HX_STACK_PUSH("Event::get_currentTarget","flash/events/Event.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->__currentTarget;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_currentTarget,return )

bool Event_obj::get_cancelable( ){
	HX_STACK_PUSH("Event::get_cancelable","flash/events/Event.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return this->__cancelable;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_cancelable,return )

bool Event_obj::get_bubbles( ){
	HX_STACK_PUSH("Event::get_bubbles","flash/events/Event.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	return this->__bubbles;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_bubbles,return )

Void Event_obj::__setPhase( ::flash::events::EventPhase value){
{
		HX_STACK_PUSH("Event::__setPhase","flash/events/Event.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(116)
		this->__eventPhase = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,__setPhase,(void))

bool Event_obj::__getIsCancelledNow( ){
	HX_STACK_PUSH("Event::__getIsCancelledNow","flash/events/Event.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_LINE(109)
	return this->__isCancelledNow;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,__getIsCancelledNow,return )

bool Event_obj::__getIsCancelled( ){
	HX_STACK_PUSH("Event::__getIsCancelled","flash/events/Event.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->__isCancelled;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,__getIsCancelled,return )

::String Event_obj::toString( ){
	HX_STACK_PUSH("Event::toString","flash/events/Event.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return ((((((HX_CSTRING("[Event type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

Void Event_obj::stopPropagation( ){
{
		HX_STACK_PUSH("Event::stopPropagation","flash/events/Event.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		if ((this->get_cancelable())){
			HX_STACK_LINE(86)
			this->__isCancelled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

Void Event_obj::stopImmediatePropagation( ){
{
		HX_STACK_PUSH("Event::stopImmediatePropagation","flash/events/Event.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		if ((this->get_cancelable())){
			HX_STACK_LINE(76)
			this->__isCancelled = true;
			HX_STACK_LINE(77)
			this->__isCancelledNow = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

::flash::events::Event Event_obj::clone( ){
	HX_STACK_PUSH("Event::clone","flash/events/Event.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return ::flash::events::Event_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable());
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::CONTEXT3D_CREATE;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::UNLOAD;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(__type,"__type");
	HX_MARK_MEMBER_NAME(__target,"__target");
	HX_MARK_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_MARK_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_MARK_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_MARK_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_MARK_MEMBER_NAME(__cancelable,"__cancelable");
	HX_MARK_MEMBER_NAME(__bubbles,"__bubbles");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__type,"__type");
	HX_VISIT_MEMBER_NAME(__target,"__target");
	HX_VISIT_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_VISIT_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_VISIT_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_VISIT_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_VISIT_MEMBER_NAME(__cancelable,"__cancelable");
	HX_VISIT_MEMBER_NAME(__bubbles,"__bubbles");
}

Dynamic Event_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { return ID3; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { return INIT; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { return OPEN; }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { return ADDED; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { return CLOSE; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { return CANCEL; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { return CHANGE; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { return RENDER; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { return RESIZE; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { return SCROLL; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { return SELECT; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { return UNLOAD; }
		if (HX_FIELD_EQ(inName,"__type") ) { return __type; }
		if (HX_FIELD_EQ(inName,"target") ) { return get_target(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { return CONNECT; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { return REMOVED; }
		if (HX_FIELD_EQ(inName,"bubbles") ) { return get_bubbles(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { return ACTIVATE; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__target") ) { return __target; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { return __bubbles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { return DEACTIVATE; }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"__setPhase") ) { return __setPhase_dyn(); }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return get_eventPhase(); }
		if (HX_FIELD_EQ(inName,"cancelable") ) { return get_cancelable(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { return ENTER_FRAME; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { return MOUSE_LEAVE; }
		if (HX_FIELD_EQ(inName,"get_bubbles") ) { return get_bubbles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { return __eventPhase; }
		if (HX_FIELD_EQ(inName,"__cancelable") ) { return __cancelable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { return __isCancelled; }
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return get_currentTarget(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { return ADDED_TO_STAGE; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { return SOUND_COMPLETE; }
		if (HX_FIELD_EQ(inName,"get_eventPhase") ) { return get_eventPhase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cancelable") ) { return get_cancelable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { return __currentTarget; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { return CONTEXT3D_CREATE; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { return TAB_INDEX_CHANGE; }
		if (HX_FIELD_EQ(inName,"__getIsCancelled") ) { return __getIsCancelled_dyn(); }
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { return __isCancelledNow; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_currentTarget") ) { return set_currentTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentTarget") ) { return get_currentTarget_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { return REMOVED_FROM_STAGE; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { return TAB_ENABLED_CHANGE; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { return TAB_CHILDREN_CHANGE; }
		if (HX_FIELD_EQ(inName,"__getIsCancelledNow") ) { return __getIsCancelledNow_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { ID3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { INIT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { SCROLL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { UNLOAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__type") ) { __type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { return set_target(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { CONNECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__target") ) { __target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { __bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { MOUSE_LEAVE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { __eventPhase=inValue.Cast< ::flash::events::EventPhase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cancelable") ) { __cancelable=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { __isCancelled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return set_currentTarget(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { __currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { CONTEXT3D_CREATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { TAB_INDEX_CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { __isCancelledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { TAB_ENABLED_CHANGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { TAB_CHILDREN_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__type"));
	outFields->push(HX_CSTRING("__target"));
	outFields->push(HX_CSTRING("__isCancelledNow"));
	outFields->push(HX_CSTRING("__isCancelled"));
	outFields->push(HX_CSTRING("__eventPhase"));
	outFields->push(HX_CSTRING("__currentTarget"));
	outFields->push(HX_CSTRING("__cancelable"));
	outFields->push(HX_CSTRING("__bubbles"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("eventPhase"));
	outFields->push(HX_CSTRING("currentTarget"));
	outFields->push(HX_CSTRING("cancelable"));
	outFields->push(HX_CSTRING("bubbles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ACTIVATE"),
	HX_CSTRING("ADDED"),
	HX_CSTRING("ADDED_TO_STAGE"),
	HX_CSTRING("CANCEL"),
	HX_CSTRING("CHANGE"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("CONNECT"),
	HX_CSTRING("CONTEXT3D_CREATE"),
	HX_CSTRING("DEACTIVATE"),
	HX_CSTRING("ENTER_FRAME"),
	HX_CSTRING("ID3"),
	HX_CSTRING("INIT"),
	HX_CSTRING("MOUSE_LEAVE"),
	HX_CSTRING("OPEN"),
	HX_CSTRING("REMOVED"),
	HX_CSTRING("REMOVED_FROM_STAGE"),
	HX_CSTRING("RENDER"),
	HX_CSTRING("RESIZE"),
	HX_CSTRING("SCROLL"),
	HX_CSTRING("SELECT"),
	HX_CSTRING("SOUND_COMPLETE"),
	HX_CSTRING("TAB_CHILDREN_CHANGE"),
	HX_CSTRING("TAB_ENABLED_CHANGE"),
	HX_CSTRING("TAB_INDEX_CHANGE"),
	HX_CSTRING("UNLOAD"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_type"),
	HX_CSTRING("set_target"),
	HX_CSTRING("get_target"),
	HX_CSTRING("get_eventPhase"),
	HX_CSTRING("set_currentTarget"),
	HX_CSTRING("get_currentTarget"),
	HX_CSTRING("get_cancelable"),
	HX_CSTRING("get_bubbles"),
	HX_CSTRING("__setPhase"),
	HX_CSTRING("__getIsCancelledNow"),
	HX_CSTRING("__getIsCancelled"),
	HX_CSTRING("toString"),
	HX_CSTRING("stopPropagation"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("clone"),
	HX_CSTRING("__type"),
	HX_CSTRING("__target"),
	HX_CSTRING("__isCancelledNow"),
	HX_CSTRING("__isCancelled"),
	HX_CSTRING("__eventPhase"),
	HX_CSTRING("__currentTarget"),
	HX_CSTRING("__cancelable"),
	HX_CSTRING("__bubbles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_VISIT_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.events.Event"), hx::TCanCast< Event_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Event_obj::__boot()
{
	ACTIVATE= HX_CSTRING("activate");
	ADDED= HX_CSTRING("added");
	ADDED_TO_STAGE= HX_CSTRING("addedToStage");
	CANCEL= HX_CSTRING("cancel");
	CHANGE= HX_CSTRING("change");
	CLOSE= HX_CSTRING("close");
	COMPLETE= HX_CSTRING("complete");
	CONNECT= HX_CSTRING("connect");
	CONTEXT3D_CREATE= HX_CSTRING("context3DCreate");
	DEACTIVATE= HX_CSTRING("deactivate");
	ENTER_FRAME= HX_CSTRING("enterFrame");
	ID3= HX_CSTRING("id3");
	INIT= HX_CSTRING("init");
	MOUSE_LEAVE= HX_CSTRING("mouseLeave");
	OPEN= HX_CSTRING("open");
	REMOVED= HX_CSTRING("removed");
	REMOVED_FROM_STAGE= HX_CSTRING("removedFromStage");
	RENDER= HX_CSTRING("render");
	RESIZE= HX_CSTRING("resize");
	SCROLL= HX_CSTRING("scroll");
	SELECT= HX_CSTRING("select");
	SOUND_COMPLETE= HX_CSTRING("soundComplete");
	TAB_CHILDREN_CHANGE= HX_CSTRING("tabChildrenChange");
	TAB_ENABLED_CHANGE= HX_CSTRING("tabEnabledChange");
	TAB_INDEX_CHANGE= HX_CSTRING("tabIndexChange");
	UNLOAD= HX_CSTRING("unload");
}

} // end namespace flash
} // end namespace events
