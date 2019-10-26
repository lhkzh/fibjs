/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _DbConnection_base_H_
#define _DbConnection_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs {

class DbConnection_base : public object_base {
    DECLARE_CLASS(DbConnection_base);

public:
    // DbConnection_base
    virtual result_t get_type(exlib::string& retVal) = 0;
    virtual result_t close(AsyncEvent* ac) = 0;
    virtual result_t begin(AsyncEvent* ac) = 0;
    virtual result_t commit(AsyncEvent* ac) = 0;
    virtual result_t rollback(AsyncEvent* ac) = 0;
    virtual result_t trans(v8::Local<v8::Function> func, bool& retVal) = 0;
    virtual result_t execute(exlib::string sql, OptArgs args, obj_ptr<NArray>& retVal, AsyncEvent* ac) = 0;
    virtual result_t insert(exlib::string table, v8::Local<v8::Object> opts, AsyncEvent* ac) = 0;
    virtual result_t find(exlib::string table, v8::Local<v8::Object> opts, obj_ptr<NArray>& retVal, AsyncEvent* ac) = 0;
    virtual result_t count(exlib::string table, v8::Local<v8::Object> opts, int32_t& retVal, AsyncEvent* ac) = 0;
    virtual result_t update(exlib::string table, v8::Local<v8::Object> opts, int32_t& retVal, AsyncEvent* ac) = 0;
    virtual result_t format(exlib::string table, v8::Local<v8::Object> opts, exlib::string& retVal) = 0;
    virtual result_t format(exlib::string sql, OptArgs args, exlib::string& retVal) = 0;

public:
    static void s__new(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        CONSTRUCT_INIT();

        Isolate* isolate = Isolate::current();

        isolate->m_isolate->ThrowException(
            isolate->NewString("not a constructor"));
    }

public:
    static void s_get_type(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& args);
    static void s_close(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_begin(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_commit(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_rollback(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_trans(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_execute(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_insert(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_find(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_count(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_update(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_format(const v8::FunctionCallbackInfo<v8::Value>& args);

public:
    ASYNC_MEMBER0(DbConnection_base, close);
    ASYNC_MEMBER0(DbConnection_base, begin);
    ASYNC_MEMBER0(DbConnection_base, commit);
    ASYNC_MEMBER0(DbConnection_base, rollback);
    ASYNC_MEMBERVALUE3(DbConnection_base, execute, exlib::string, OptArgs, obj_ptr<NArray>);
    ASYNC_MEMBER2(DbConnection_base, insert, exlib::string, v8::Local<v8::Object>);
    ASYNC_MEMBERVALUE3(DbConnection_base, find, exlib::string, v8::Local<v8::Object>, obj_ptr<NArray>);
    ASYNC_MEMBERVALUE3(DbConnection_base, count, exlib::string, v8::Local<v8::Object>, int32_t);
    ASYNC_MEMBERVALUE3(DbConnection_base, update, exlib::string, v8::Local<v8::Object>, int32_t);
};
}

namespace fibjs {
inline ClassInfo& DbConnection_base::class_info()
{
    static ClassData::ClassMethod s_method[] = {
        { "close", s_close, false },
        { "closeSync", s_close, false },
        { "begin", s_begin, false },
        { "beginSync", s_begin, false },
        { "commit", s_commit, false },
        { "commitSync", s_commit, false },
        { "rollback", s_rollback, false },
        { "rollbackSync", s_rollback, false },
        { "trans", s_trans, false },
        { "execute", s_execute, false },
        { "executeSync", s_execute, false },
        { "insert", s_insert, false },
        { "insertSync", s_insert, false },
        { "find", s_find, false },
        { "findSync", s_find, false },
        { "count", s_count, false },
        { "countSync", s_count, false },
        { "update", s_update, false },
        { "updateSync", s_update, false },
        { "format", s_format, false }
    };

    static ClassData::ClassProperty s_property[] = {
        { "type", s_get_type, block_set, false }
    };

    static ClassData s_cd = {
        "DbConnection", false, s__new, NULL,
        ARRAYSIZE(s_method), s_method, 0, NULL, ARRAYSIZE(s_property), s_property, 0, NULL, NULL, NULL,
        &object_base::class_info()
    };

    static ClassInfo s_ci(s_cd);
    return s_ci;
}

inline void DbConnection_base::s_get_type(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& args)
{
    exlib::string vr;

    METHOD_NAME("DbConnection.type");
    METHOD_INSTANCE(DbConnection_base);
    PROPERTY_ENTER();

    hr = pInst->get_type(vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_close(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("DbConnection.close");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(0, 0);

    if (!cb.IsEmpty()) {
        pInst->acb_close(cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_close();

    METHOD_VOID();
}

inline void DbConnection_base::s_begin(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("DbConnection.begin");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(0, 0);

    if (!cb.IsEmpty()) {
        pInst->acb_begin(cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_begin();

    METHOD_VOID();
}

inline void DbConnection_base::s_commit(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("DbConnection.commit");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(0, 0);

    if (!cb.IsEmpty()) {
        pInst->acb_commit(cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_commit();

    METHOD_VOID();
}

inline void DbConnection_base::s_rollback(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("DbConnection.rollback");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(0, 0);

    if (!cb.IsEmpty()) {
        pInst->acb_rollback(cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_rollback();

    METHOD_VOID();
}

inline void DbConnection_base::s_trans(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    bool vr;

    METHOD_NAME("DbConnection.trans");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(v8::Local<v8::Function>, 0);

    hr = pInst->trans(v0, vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_execute(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    obj_ptr<NArray> vr;

    METHOD_NAME("DbConnection.execute");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(-1, 1);

    ARG(exlib::string, 0);
    ARG_LIST(1);

    if (!cb.IsEmpty()) {
        pInst->acb_execute(v0, v1, cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_execute(v0, v1, vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_insert(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("DbConnection.insert");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(2, 1);

    ARG(exlib::string, 0);
    OPT_ARG(v8::Local<v8::Object>, 1, v8::Object::New(isolate));

    if (!cb.IsEmpty()) {
        pInst->acb_insert(v0, v1, cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_insert(v0, v1);

    METHOD_VOID();
}

inline void DbConnection_base::s_find(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    obj_ptr<NArray> vr;

    METHOD_NAME("DbConnection.find");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(2, 1);

    ARG(exlib::string, 0);
    OPT_ARG(v8::Local<v8::Object>, 1, v8::Object::New(isolate));

    if (!cb.IsEmpty()) {
        pInst->acb_find(v0, v1, cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_find(v0, v1, vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_count(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    int32_t vr;

    METHOD_NAME("DbConnection.count");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(2, 1);

    ARG(exlib::string, 0);
    OPT_ARG(v8::Local<v8::Object>, 1, v8::Object::New(isolate));

    if (!cb.IsEmpty()) {
        pInst->acb_count(v0, v1, cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_count(v0, v1, vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_update(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    int32_t vr;

    METHOD_NAME("DbConnection.update");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    ASYNC_METHOD_OVER(2, 1);

    ARG(exlib::string, 0);
    OPT_ARG(v8::Local<v8::Object>, 1, v8::Object::New(isolate));

    if (!cb.IsEmpty()) {
        pInst->acb_update(v0, v1, cb);
        hr = CALL_RETURN_NULL;
    } else
        hr = pInst->ac_update(v0, v1, vr);

    METHOD_RETURN();
}

inline void DbConnection_base::s_format(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    exlib::string vr;

    METHOD_NAME("DbConnection.format");
    METHOD_INSTANCE(DbConnection_base);
    METHOD_ENTER();

    METHOD_OVER(2, 2);

    ARG(exlib::string, 0);
    ARG(v8::Local<v8::Object>, 1);

    hr = pInst->format(v0, v1, vr);

    METHOD_OVER(-1, 1);

    ARG(exlib::string, 0);
    ARG_LIST(1);

    hr = pInst->format(v0, v1, vr);

    METHOD_RETURN();
}
}

#endif
