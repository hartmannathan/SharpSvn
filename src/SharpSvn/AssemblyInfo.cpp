// $Id$
// Copyright (c) SharpSvn Project 2007
// The Sourcecode of this project is available under the Apache 2.0 license
// Please read the SharpSvnLicense.txt file for more details

#include "stdafx.h"
#include "SvnLibraryAttribute.h"

#pragma warning(disable: 4635)
#pragma warning(disable: 4634) // XML document comment: cannot be applied:  Discarding XML document comment for invalid target.

#include <apr-1/apr_version.h>
#include <apr-1/apu_version.h>
#if (APU_HAVE_APR_ICONV != 0)
#include <apr-1/api_version.h>
#endif
#include <svn_version.h>
#include <serf/serf.h>
#include <openssl/opensslv.h>
#include <neon/neon_version.h>	// Generated by our import script as we can't use config.h
#include <db.h>
#define STRUCT_IOVEC_DEFINED // Kill compile error

#include <sasl/sasl.h>	// Generated by our import script as we can't use config.h
#include <zlib.h>

using namespace System;
using namespace System::Reflection;
using namespace System::Resources;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;
using SharpSvn::Implementation::SvnLibraryAttribute;

#define SERF_VERSION APR_STRINGIFY(SERF_MAJOR_VERSION) \
                           "." APR_STRINGIFY(SERF_MINOR_VERSION) \
                           "." APR_STRINGIFY(SERF_PATCH_VERSION)

#define BDB_VERSION APR_STRINGIFY(DB_VERSION_MAJOR) "." APR_STRINGIFY(DB_VERSION_MINOR) "." APR_STRINGIFY(DB_VERSION_PATCH)

#define SASL_VERSION APR_STRINGIFY(SASL_VERSION_MAJOR) "." APR_STRINGIFY(SASL_VERSION_MINOR) "." APR_STRINGIFY(SASL_VERSION_STEP)
//
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
//
[assembly:AssemblyTitleAttribute("SharpSvn - Subversion for .Net 2.0-3.5")];
[assembly:AssemblyDescriptionAttribute("SharpSvn (Compiled statically with subversion " SVN_VER_NUMBER
									   ", apr " APR_VERSION_STRING
									   ", apr-util " APU_VERSION_STRING
									   ", neon " NEON_VERSION
									   ", serf " SERF_VERSION
									   ", zlib " ZLIB_VERSION
									   " and " OPENSSL_VERSION_TEXT
									   ". Dynamically linked to Berkeley DB" BDB_VERSION
									   ", Cyrus Sasl " SASL_VERSION " and Putty's Plink)")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("SharpSvn Project")];
[assembly:AssemblyProductAttribute("SharpSvn")];
[assembly:AssemblyCopyrightAttribute("Copyright � SharpSvn Project 2007-2008")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];

[assembly:SvnLibrary("Subversion", SVN_VER_NUMBER)];
[assembly:SvnLibrary("Apr", APR_VERSION_STRING)];
[assembly:SvnLibrary("Apr-util", APU_VERSION_STRING)];
[assembly:SvnLibrary("Neon", NEON_VERSION)];
[assembly:SvnLibrary("serf", SERF_VERSION)];
[assembly:SvnLibrary("ZLib", ZLIB_VERSION)];
[assembly:SvnLibrary("OpenSSL", OPENSSL_VERSION_TEXT)];
[assembly:SvnLibrary("Berkeley DB", BDB_VERSION, DynamicallyLinked=true)];
[assembly:SvnLibrary("Cyrus Sasl", SASL_VERSION, DynamicallyLinked=true)];
[assembly:SvnLibrary("SharpPlink", "", DynamicallyLinked=true)];

//
// Version information for an assembly consists of the following four values:
//
//      Major Version
//      Minor Version
//      Build Number
//      Revision
//
// You can specify all the value or you can default the Revision and Build Numbers
// by using the '*' as shown below:

[assembly:AssemblyVersionAttribute("1.5002.0.1")];
[assembly:NeutralResourcesLanguageAttribute("en")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];

[assembly:SecurityPermission(SecurityAction::RequestMinimum, UnmanagedCode = true)];

[assembly:RuntimeCompatibility(WrapNonExceptionThrows = true)];
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "Gdi32.lib")
#pragma comment(lib, "User32.lib")

#include "../../imports/release/include/sharpsvn-imports.h"
