#ifndef INCLUDED_openfl_gl_GLShader
#define INCLUDED_openfl_gl_GLShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/gl/GLObject.h>
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
namespace openfl{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GLShader_obj : public ::openfl::gl::GLObject_obj{
	public:
		typedef ::openfl::gl::GLObject_obj super;
		typedef GLShader_obj OBJ_;
		GLShader_obj();
		Void __construct(int version,Dynamic id);

	public:
		static hx::ObjectPtr< GLShader_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GLShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GLShader"); }

		virtual ::String getType( );

};

} // end namespace openfl
} // end namespace gl

#endif /* INCLUDED_openfl_gl_GLShader */ 
