#ifndef org_apache_lucene_search_join_JoinUtil_H
#define org_apache_lucene_search_join_JoinUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace join {
          class ScoreMode;
        }
        class IndexSearcher;
      }
      namespace index {
        class OrdinalMap;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class JoinUtil : public ::java::lang::Object {
           public:
            enum {
              mid_createJoinQuery_d6761fa8c4297dcf,
              mid_createJoinQuery_bf302e9cb5972e70,
              mid_createJoinQuery_852cf3493851b601,
              mid_createJoinQuery_fb187dbcab4b720c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JoinUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JoinUtil(const JoinUtil& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::Query createJoinQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::join::ScoreMode &, const ::org::apache::lucene::index::OrdinalMap &);
            static ::org::apache::lucene::search::Query createJoinQuery(const ::java::lang::String &, jboolean, const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::join::ScoreMode &);
            static ::org::apache::lucene::search::Query createJoinQuery(const ::java::lang::String &, jboolean, const ::java::lang::String &, const ::java::lang::Class &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::join::ScoreMode &);
            static ::org::apache::lucene::search::Query createJoinQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::join::ScoreMode &, const ::org::apache::lucene::index::OrdinalMap &, jint, jint);
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
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(JoinUtil);
          extern PyTypeObject *PY_TYPE(JoinUtil);

          class t_JoinUtil {
          public:
            PyObject_HEAD
            JoinUtil object;
            static PyObject *wrap_Object(const JoinUtil&);
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
