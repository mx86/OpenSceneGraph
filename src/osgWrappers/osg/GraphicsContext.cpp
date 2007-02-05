// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/GraphicsContext>
#include <osg/GraphicsThread>
#include <osg/State>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/Camera>
	
TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Operation > >, osg::GraphicsContext::OperationQueue);

TYPE_NAME_ALIAS(std::list< osg::Camera * >, osg::GraphicsContext::Cameras);

BEGIN_OBJECT_REFLECTOR(osg::GraphicsContext)
	I_BaseType(osg::Object);
	I_Method1(void, add, IN, osg::Operation *, operation,
	          __void__add__Operation_P1,
	          "Add operation to end of OperationQueue. ",
	          "");
	I_Method1(void, remove, IN, osg::Operation *, operation,
	          __void__remove__Operation_P1,
	          "Remove operation from OperationQueue. ",
	          "");
	I_Method1(void, remove, IN, const std::string &, name,
	          __void__remove__C5_std_string_R1,
	          "Remove named operation from OperationQueue. ",
	          "");
	I_Method0(void, removeAllOperations,
	          __void__removeAllOperations,
	          "Remove all operations from OperationQueue. ",
	          "");
	I_Method0(void, runOperations,
	          __void__runOperations,
	          "Run the operations. ",
	          "");
	I_Method0(osg::GraphicsContext::OperationQueue &, getOperationsQueue,
	          __OperationQueue_R1__getOperationsQueue,
	          "Get the operations queue, not you must use the OperationsMutex when accessing the queue. ",
	          "");
	I_Method0(OpenThreads::Mutex *, getOperationsMutex,
	          __OpenThreads_Mutex_P1__getOperationsMutex,
	          "Get the operations queue mutex. ",
	          "");
	I_Method0(osg::Block *, getOperationsBlock,
	          __osg_Block_P1__getOperationsBlock,
	          "Get the operations queue block used to mark an empty queue, if you end items into the empty queu you must release this block. ",
	          "");
	I_Method0(osg::Operation *, getCurrentOperation,
	          __Operation_P1__getCurrentOperation,
	          "Get the current operations that is being run. ",
	          "");
	I_Method0(const osg::GraphicsContext::Traits *, getTraits,
	          __C5_Traits_P1__getTraits,
	          "Get the traits of the GraphicsContext. ",
	          "");
	I_Method0(bool, valid,
	          __bool__valid,
	          "Return whether a valid and usable GraphicsContext has been created. ",
	          "");
	I_Method1(void, setState, IN, osg::State *, state,
	          __void__setState__State_P1,
	          "Set the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(osg::State *, getState,
	          __State_P1__getState,
	          "Get the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(const osg::State *, getState,
	          __C5_State_P1__getState,
	          "Get the const State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method1(void, setClearColor, IN, const osg::Vec4 &, color,
	          __void__setClearColor__C5_Vec4_R1,
	          "Sets the clear color. ",
	          "");
	I_Method0(const osg::Vec4 &, getClearColor,
	          __C5_Vec4_R1__getClearColor,
	          "Returns the clear color. ",
	          "");
	I_Method1(void, setClearMask, IN, GLbitfield, mask,
	          __void__setClearMask__GLbitfield,
	          "Set the clear mask used in glClear(. ",
	          ".). Defaults to GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT. ");
	I_Method0(GLbitfield, getClearMask,
	          __GLbitfield__getClearMask,
	          "Get the clear mask. ",
	          "");
	I_Method0(void, clear,
	          __void__clear,
	          "Do an OpenGL clear of the full graphics context/window. ",
	          "Note, must only be called from a thread with this context current. ");
	I_Method0(bool, realize,
	          __bool__realize,
	          "Realise the GraphicsContext. ",
	          "");
	I_MethodWithDefaults1(void, close, IN, bool, callCloseImplementation, true,
	                      __void__close__bool,
	                      "close the graphics context. ",
	                      "close(bool) stops any associated graphics threads, releases the contextID for the GraphicsContext then optional calls closeImplementation() to do the actual deletion of the graphics. This call is made optional as there are times when the graphics context has already been deleted externally and only the OSG side of the its data need to be closed down. ");
	I_Method0(void, swapBuffers,
	          __void__swapBuffers,
	          "swap the front and back buffers. ",
	          "");
	I_Method0(bool, isRealized,
	          __bool__isRealized,
	          "Return true if the graphics context has been realised and is ready to use. ",
	          "");
	I_Method0(bool, makeCurrent,
	          __bool__makeCurrent,
	          "Make this graphics context current. ",
	          "Implementated by calling makeCurrentImplementation(). Returns true on success. ");
	I_Method1(bool, makeContextCurrent, IN, osg::GraphicsContext *, readContext,
	          __bool__makeContextCurrent__GraphicsContext_P1,
	          "Make this graphics context current with specified read context. ",
	          "Implementated by calling makeContextCurrentImplementation(). Returns true on success. ");
	I_Method0(bool, releaseContext,
	          __bool__releaseContext,
	          "Release the graphics context. ",
	          "Returns true on success. ");
	I_Method0(bool, isCurrent,
	          __bool__isCurrent,
	          "Return true if the current thread has this OpenGL graphics context. ",
	          "");
	I_Method1(void, bindPBufferToTexture, IN, GLenum, buffer,
	          __void__bindPBufferToTexture__GLenum,
	          "Bind the graphics context to associated texture. ",
	          "");
	I_Method0(void, createGraphicsThread,
	          __void__createGraphicsThread,
	          "Create a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method1(void, setGraphicsThread, IN, osg::OperationsThread *, gt,
	          __void__setGraphicsThread__OperationsThread_P1,
	          "Assign a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method0(osg::OperationsThread *, getGraphicsThread,
	          __OperationsThread_P1__getGraphicsThread,
	          "Get the graphics thread assigned the graphics context. ",
	          "");
	I_Method0(const osg::OperationsThread *, getGraphicsThread,
	          __C5_OperationsThread_P1__getGraphicsThread,
	          "Get the const graphics thread assigned the graphics context. ",
	          "");
	I_Method0(bool, realizeImplementation,
	          __bool__realizeImplementation,
	          "Realise the GraphicsContext implementation, Pure virtual - must be implemented by concrate implementations of GraphicsContext. ",
	          "");
	I_Method0(bool, isRealizedImplementation,
	          __bool__isRealizedImplementation,
	          "Return true if the graphics context has been realised, and is ready to use, implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, closeImplementation,
	          __void__closeImplementation,
	          "Close the graphics context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, makeCurrentImplementation,
	          __bool__makeCurrentImplementation,
	          "Make this graphics context current implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method1(bool, makeContextCurrentImplementation, IN, osg::GraphicsContext *, readContext,
	          __bool__makeContextCurrentImplementation__GraphicsContext_P1,
	          "Make this graphics context current with specified read context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(bool, releaseContextImplementation,
	          __bool__releaseContextImplementation,
	          "Release the graphics context implementation. ",
	          "");
	I_Method1(void, bindPBufferToTextureImplementation, IN, GLenum, buffer,
	          __void__bindPBufferToTextureImplementation__GLenum,
	          "Pure virtual, Bind the graphics context to associated texture implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, swapBuffersImplementation,
	          __void__swapBuffersImplementation,
	          "Swap the front and back buffers implementation. ",
	          "Pure virtual - must be implemented by Concrate implementations of GraphicsContext. ");
	I_Method4(void, resized, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          __void__resized__int__int__int__int,
	          "resized method should be called when the underlying window has been resized and the GraphicsWindow and associated Cameras must be updated to keep in sync with the new size. ",
	          "");
	I_Method1(void, setResizedCallback, IN, osg::GraphicsContext::ResizedCallback *, rc,
	          __void__setResizedCallback__ResizedCallback_P1,
	          "Set the resized callback which overrides the GraphicsConext::realizedImplementation(), allow developers to provide custom behavior in response to a window being resized. ",
	          "");
	I_Method0(osg::GraphicsContext::ResizedCallback *, getResizedCallback,
	          __ResizedCallback_P1__getResizedCallback,
	          "Get the resized callback which overrides the GraphicsConext::realizedImplementation(). ",
	          "");
	I_Method0(const osg::GraphicsContext::ResizedCallback *, getResizedCallback,
	          __C5_ResizedCallback_P1__getResizedCallback,
	          "Get the const resized callback which overrides the GraphicsConext::realizedImplementation(). ",
	          "");
	I_Method4(void, resizedImplementation, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          __void__resizedImplementation__int__int__int__int,
	          "resized implementation, by default resizes the viewports and aspect ratios the cameras associated with the graphics Window. ",
	          "");
	I_Method0(osg::GraphicsContext::Cameras &, getCameras,
	          __Cameras_R1__getCameras,
	          "Get the the list of cameras associated with this graphics context. ",
	          "");
	I_Method0(const osg::GraphicsContext::Cameras &, getCameras,
	          __C5_Cameras_R1__getCameras,
	          "Get the the const list of cameras associated with this graphics context. ",
	          "");
	I_StaticMethod1(void, setWindowingSystemInterface, IN, osg::GraphicsContext::WindowingSystemInterface *, wsInterface,
	                __void__setWindowingSystemInterface__WindowingSystemInterface_P1_S,
	                "Set the querry the windowing system for screens and create graphics context - this functor should be supplied by the windows toolkit. ",
	                "");
	I_StaticMethod0(osg::GraphicsContext::WindowingSystemInterface *, getWindowingSystemInterface,
	                __WindowingSystemInterface_P1__getWindowingSystemInterface_S,
	                "Get the WindowingSystemInterface. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	                __GraphicsContext_P1__createGraphicsContext__Traits_P1_S,
	                "Create a graphics context for a specified set of traits. ",
	                "");
	I_StaticMethod0(unsigned int, createNewContextID,
	                __unsigned_int__createNewContextID_S,
	                "Create a contextID for a new graphics context, this contextID is used to set up the osg::State associate with context. ",
	                "Automatically increments the usage count of the contextID to 1. ");
	I_StaticMethod1(void, incrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__incrementContextIDUsageCount__unsigned_int_S,
	                "Increment the usage count associate with a contextID. ",
	                "The usage count speficies how many graphics contexts a specific contextID is shared between. ");
	I_StaticMethod1(void, decrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__decrementContextIDUsageCount__unsigned_int_S,
	                "Decrement the usage count associate with a contextID. ",
	                "Once the contextID goes to 0 the contextID is then free to be reused. ");
	I_SimpleProperty(osg::GraphicsContext::Cameras &, Cameras, 
	                 __Cameras_R1__getCameras, 
	                 0);
	I_SimpleProperty(const osg::Vec4 &, ClearColor, 
	                 __C5_Vec4_R1__getClearColor, 
	                 __void__setClearColor__C5_Vec4_R1);
	I_SimpleProperty(GLbitfield, ClearMask, 
	                 __GLbitfield__getClearMask, 
	                 __void__setClearMask__GLbitfield);
	I_SimpleProperty(osg::Operation *, CurrentOperation, 
	                 __Operation_P1__getCurrentOperation, 
	                 0);
	I_SimpleProperty(osg::OperationsThread *, GraphicsThread, 
	                 __OperationsThread_P1__getGraphicsThread, 
	                 __void__setGraphicsThread__OperationsThread_P1);
	I_SimpleProperty(osg::Block *, OperationsBlock, 
	                 __osg_Block_P1__getOperationsBlock, 
	                 0);
	I_SimpleProperty(OpenThreads::Mutex *, OperationsMutex, 
	                 __OpenThreads_Mutex_P1__getOperationsMutex, 
	                 0);
	I_SimpleProperty(osg::GraphicsContext::OperationQueue &, OperationsQueue, 
	                 __OperationQueue_R1__getOperationsQueue, 
	                 0);
	I_SimpleProperty(osg::GraphicsContext::ResizedCallback *, ResizedCallback, 
	                 __ResizedCallback_P1__getResizedCallback, 
	                 __void__setResizedCallback__ResizedCallback_P1);
	I_SimpleProperty(osg::State *, State, 
	                 __State_P1__getState, 
	                 __void__setState__State_P1);
	I_SimpleProperty(const osg::GraphicsContext::Traits *, Traits, 
	                 __C5_Traits_P1__getTraits, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext::ResizedCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____ResizedCallback,
	               "",
	               "");
	I_Method5(void, resizedImplementation, IN, osg::GraphicsContext *, gc, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          __void__resizedImplementation__GraphicsContext_P1__int__int__int__int,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::GraphicsContext::ScreenIdentifier)
	I_Constructor0(____ScreenIdentifier,
	               "",
	               "");
	I_Constructor1(IN, unsigned int, in_screenNum,
	               ____ScreenIdentifier__unsigned_int,
	               "",
	               "");
	I_Constructor3(IN, const std::string &, in_hostName, IN, unsigned int, in_displayNum, IN, unsigned int, in_screenNum,
	               ____ScreenIdentifier__C5_std_string_R1__unsigned_int__unsigned_int,
	               "",
	               "");
	I_Method0(std::string, displayName,
	          __std_string__displayName,
	          "",
	          "");
	I_PublicMemberProperty(std::string, hostName);
	I_PublicMemberProperty(unsigned int, displayNum);
	I_PublicMemberProperty(unsigned int, screenNum);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::GraphicsContext::Traits)
	I_BaseType(osg::Referenced);
	I_BaseType(osg::GraphicsContext::ScreenIdentifier);
	I_Constructor0(____Traits,
	               "",
	               "");
	I_PublicMemberProperty(int, x);
	I_PublicMemberProperty(int, y);
	I_PublicMemberProperty(int, width);
	I_PublicMemberProperty(int, height);
	I_PublicMemberProperty(std::string, windowName);
	I_PublicMemberProperty(bool, windowDecoration);
	I_PublicMemberProperty(bool, supportsResize);
	I_PublicMemberProperty(unsigned int, red);
	I_PublicMemberProperty(unsigned int, blue);
	I_PublicMemberProperty(unsigned int, green);
	I_PublicMemberProperty(unsigned int, alpha);
	I_PublicMemberProperty(unsigned int, depth);
	I_PublicMemberProperty(unsigned int, stencil);
	I_PublicMemberProperty(unsigned int, sampleBuffers);
	I_PublicMemberProperty(unsigned int, samples);
	I_PublicMemberProperty(bool, pbuffer);
	I_PublicMemberProperty(bool, quadBufferStereo);
	I_PublicMemberProperty(bool, doubleBuffer);
	I_PublicMemberProperty(GLenum, target);
	I_PublicMemberProperty(unsigned int, level);
	I_PublicMemberProperty(unsigned int, face);
	I_PublicMemberProperty(unsigned int, mipMapGeneration);
	I_PublicMemberProperty(bool, vsync);
	I_PublicMemberProperty(bool, useCursor);
	I_PublicMemberProperty(osg::GraphicsContext *, sharedContext);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext::WindowingSystemInterface)
	I_BaseType(osg::Referenced);
	I_Constructor0(____WindowingSystemInterface,
	               "",
	               "");
	I_MethodWithDefaults1(unsigned int, getNumScreens, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, osg::GraphicsContext::ScreenIdentifier(),
	                      __unsigned_int__getNumScreens__C5_ScreenIdentifier_R1,
	                      "",
	                      "");
	I_Method3(void, getScreenResolution, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, unsigned int &, width, IN, unsigned int &, height,
	          __void__getScreenResolution__C5_ScreenIdentifier_R1__unsigned_int_R1__unsigned_int_R1,
	          "",
	          "");
	I_Method3(bool, setScreenResolution, IN, const osg::GraphicsContext::ScreenIdentifier &, x, IN, unsigned, int, IN, unsigned, int,
	          __bool__setScreenResolution__C5_ScreenIdentifier_R1__unsigned__unsigned,
	          "",
	          "");
	I_Method2(bool, setScreenRefreshRate, IN, const osg::GraphicsContext::ScreenIdentifier &, x, IN, double, x,
	          __bool__setScreenRefreshRate__C5_ScreenIdentifier_R1__double,
	          "",
	          "");
	I_Method1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	          __GraphicsContext_P1__createGraphicsContext__Traits_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Operation >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Operation *, ptr,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Operation > &, rp,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Operation *, get,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Operation *, release,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Operation > &, rp,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Operation *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::Camera * >);

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Operation > >);

