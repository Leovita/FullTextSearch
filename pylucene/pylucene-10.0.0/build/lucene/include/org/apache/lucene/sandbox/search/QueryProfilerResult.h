#ifndef org_apache_lucene_sandbox_search_QueryProfilerResult_H
#define org_apache_lucene_sandbox_search_QueryProfilerResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Long;
    class String;
  }
  namespace util {
    class Map;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class QueryProfilerResult;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class QueryProfilerResult : public ::java::lang::Object {
           public:
            enum {
              mid_init$_12bb22e357303317,
              mid_getDescription_e7df854526d67fa3,
              mid_getProfiledChildren_1387e1e2702ac173,
              mid_getQueryName_e7df854526d67fa3,
              mid_getTimeBreakdown_5004bdf19ed33453,
              mid_getTotalTime_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryProfilerResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryProfilerResult(const QueryProfilerResult& obj) : ::java::lang::Object(obj) {}

            QueryProfilerResult(const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, jlong, const ::java::util::List &);

            ::java::lang::String getDescription() const;
            ::java::util::List getProfiledChildren() const;
            ::java::lang::String getQueryName() const;
            ::java::util::Map getTimeBreakdown() const;
            jlong getTotalTime() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(QueryProfilerResult);
          extern PyTypeObject *PY_TYPE(QueryProfilerResult);

          class t_QueryProfilerResult {
          public:
            PyObject_HEAD
            QueryProfilerResult object;
            static PyObject *wrap_Object(const QueryProfilerResult&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
