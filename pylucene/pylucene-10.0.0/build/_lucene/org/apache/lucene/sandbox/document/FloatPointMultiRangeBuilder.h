#ifndef org_apache_lucene_sandbox_document_FloatPointMultiRangeBuilder_H
#define org_apache_lucene_sandbox_document_FloatPointMultiRangeBuilder_H

#include "org/apache/lucene/sandbox/search/MultiRangeQuery$Builder.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class MultiRangeQuery;
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
        namespace document {

          class FloatPointMultiRangeBuilder : public ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder {
           public:
            enum {
              mid_init$_49e27e98009acf15,
              mid_add_d0e5c7ca8f69d543,
              mid_build_10ae858b8220da6e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatPointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatPointMultiRangeBuilder(const FloatPointMultiRangeBuilder& obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {}

            FloatPointMultiRangeBuilder(const ::java::lang::String &, jint);

            void add(const JArray< jfloat > &, const JArray< jfloat > &) const;
            ::org::apache::lucene::sandbox::search::MultiRangeQuery build() const;
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
        namespace document {
          extern PyType_Def PY_TYPE_DEF(FloatPointMultiRangeBuilder);
          extern PyTypeObject *PY_TYPE(FloatPointMultiRangeBuilder);

          class t_FloatPointMultiRangeBuilder {
          public:
            PyObject_HEAD
            FloatPointMultiRangeBuilder object;
            static PyObject *wrap_Object(const FloatPointMultiRangeBuilder&);
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
