module;

#define WIL_CPP_MODULE 1

export module wil;

#if defined( _MSC_VER )
#   pragma warning( push )
#   pragma warning( disable : 5244 )
#elif defined( __clang__ )
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#elif defined( __GNUC__ )
#endif

#include <wil/com_apartment_variable.h>
#include <wil/com.h>
#include <wil/common.h>
#include <wil/coroutine.h>
#include <wil/cppwinrt_authoring.h>
#include <wil/cppwinrt_helpers.h>
#include <wil/cppwinrt_notifiable_server_lock.h>
#include <wil/cppwinrt_wrl.h>
#include <wil/cppwinrt.h>
#include <wil/filesystem.h>
#include <wil/network.h>
#include <wil/nt_result_macros.h>
#include <wil/registry_helpers.h>
#include <wil/registry.h>
#include <wil/resource.h>
#include <wil/result_macros.h>
#include <wil/result_originate.h>
#include <wil/result.h>
#include <wil/rpc_helpers.h>
#include <wil/safecast.h>
#include <wil/stl.h>
#include <wil/token_helpers.h>
#include <wil/Tracelogging.h>
#include <wil/traceloggingconfig.h>
#include <wil/win32_helpers.h>
#include <wil/win32_result_macros.h>
#include <wil/windowing.h>
#include <wil/winrt.h>
#include <wil/wistd_config.h>
#include <wil/wistd_functional.h>
#include <wil/wistd_memory.h>
#include <wil/wistd_type_traits.h>
#include <wil/wrl.h>

#if defined( _MSC_VER )
#   pragma warning( pop )
#elif defined( __clang__ )
#   pragma clang diagnostic pop
#elif defined( __GNUC__ )
#endif
