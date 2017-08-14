/* Generated code for Python source for module 'direct.task.TaskManagerGlobal'
 * created by Nuitka version 0.5.26
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_direct$task$TaskManagerGlobal is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$task$TaskManagerGlobal;
PyDictObject *moduledict_direct$task$TaskManagerGlobal;

/* The module constants used, if any. */
extern PyObject *const_str_plain_taskMgr;
extern PyObject *const_str_plain_TaskManager;
static PyObject *const_str_digest_bf4df02fb09d14d2cdd26dcf341c3daf;
static PyObject *const_str_plain_TaskManagerGlobal;
extern PyObject *const_str_plain_Task;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_c577954440b0777629c688a927ae363d;
extern PyObject *const_str_empty;
static PyObject *const_list_str_plain_taskMgr_list;
static PyObject *const_str_digest_53e17fb7022a18418caf532e5435d78d;
extern PyObject *const_tuple_str_plain_Task_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_empty;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_bf4df02fb09d14d2cdd26dcf341c3daf = UNSTREAM_STRING( &constant_bin[ 213450 ], 58, 0 );
    const_str_plain_TaskManagerGlobal = UNSTREAM_STRING( &constant_bin[ 201091 ], 17, 1 );
    const_list_str_plain_taskMgr_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_taskMgr_list, 0, const_str_plain_taskMgr ); Py_INCREF( const_str_plain_taskMgr );
    const_str_digest_53e17fb7022a18418caf532e5435d78d = UNSTREAM_STRING( &constant_bin[ 213508 ], 32, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$task$TaskManagerGlobal( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e4c35915af598e164da5e74c1c3bf0c4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_53e17fb7022a18418caf532e5435d78d );
    codeobj_e4c35915af598e164da5e74c1c3bf0c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TaskManagerGlobal, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$task$TaskManagerGlobal =
{
    PyModuleDef_HEAD_INIT,
    "direct.task.TaskManagerGlobal",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( direct$task$TaskManagerGlobal )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$task$TaskManagerGlobal );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.task.TaskManagerGlobal: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.task.TaskManagerGlobal: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$task$TaskManagerGlobal" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$task$TaskManagerGlobal = Py_InitModule4(
        "direct.task.TaskManagerGlobal",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$task$TaskManagerGlobal = PyModule_Create( &mdef_direct$task$TaskManagerGlobal );
#endif

    moduledict_direct$task$TaskManagerGlobal = (PyDictObject *)((PyModuleObject *)module_direct$task$TaskManagerGlobal)->md_dict;

    CHECK_OBJECT( module_direct$task$TaskManagerGlobal );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c577954440b0777629c688a927ae363d, module_direct$task$TaskManagerGlobal );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$task$TaskManagerGlobal );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_bf4df02fb09d14d2cdd26dcf341c3daf;
    UPDATE_STRING_DICT0( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_taskMgr_list );
    UPDATE_STRING_DICT1( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e4c35915af598e164da5e74c1c3bf0c4, module_direct$task$TaskManagerGlobal );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$task$TaskManagerGlobal)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Task_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Task );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain_Task, tmp_assign_source_4 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain_Task );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Task );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Task" );
        exception_tb = NULL;

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    frame_module->m_frame.f_lineno = 8;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_TaskManager );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$task$TaskManagerGlobal, (Nuitka_StringObject *)const_str_plain_taskMgr, tmp_assign_source_5 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_module->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_module, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_direct$task$TaskManagerGlobal );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
