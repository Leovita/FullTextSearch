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
    class String;
    class Object;
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
              mid_init$_08af87ad4458c515,
              mid_equals_570b5248a6da3ef6,
              mid_field_09a7afff1868fc5e,
              mid_hashCode_20fbf7565993c3d7,
              mid_rawQueryString_09a7afff1868fc5e,
              mid_toString_09a7afff1868fc5e,
              mid_topLevelParser_b650a0f21839a577,
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
