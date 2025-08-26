#ifndef org_apache_lucene_queryparser_ext_ExtensionQuery_H
#define org_apache_lucene_queryparser_ext_ExtensionQuery_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParser;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class ExtensionQuery : public ::java::lang::Record {
           public:
            enum {
              mid_init$_96b8ce44c77b7867,
              mid_equals_00d17418847797d4,
              mid_field_e7df854526d67fa3,
              mid_hashCode_bd89ce15dad49192,
              mid_rawQueryString_e7df854526d67fa3,
              mid_toString_e7df854526d67fa3,
              mid_topLevelParser_c9549ffa25fedeef,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtensionQuery(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExtensionQuery(const ExtensionQuery& obj) : ::java::lang::Record(obj) {}

            ExtensionQuery(const ::org::apache::lucene::queryparser::classic::QueryParser &, const ::java::lang::String &, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String field() const;
            jint hashCode() const;
            ::java::lang::String rawQueryString() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::queryparser::classic::QueryParser topLevelParser() const;
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
      namespace queryparser {
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(ExtensionQuery);
          extern PyTypeObject *PY_TYPE(ExtensionQuery);

          class t_ExtensionQuery {
          public:
            PyObject_HEAD
            ExtensionQuery object;
            static PyObject *wrap_Object(const ExtensionQuery&);
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
