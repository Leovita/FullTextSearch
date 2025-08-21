#ifndef org_apache_lucene_sandbox_document_DoublePointMultiRangeBuilder_H
#define org_apache_lucene_sandbox_document_DoublePointMultiRangeBuilder_H

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

          class DoublePointMultiRangeBuilder : public ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder {
           public:
            enum {
              mid_init$_a5140b013bba694a,
              mid_add_ad2d0338280f2fc5,
              mid_build_83b684d3a7823a4f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoublePointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoublePointMultiRangeBuilder(const DoublePointMultiRangeBuilder& obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {}

            DoublePointMultiRangeBuilder(const ::java::lang::String &, jint);

            void add(const JArray< jdouble > &, const JArray< jdouble > &) const;
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
          extern PyType_Def PY_TYPE_DEF(DoublePointMultiRangeBuilder);
          extern PyTypeObject *PY_TYPE(DoublePointMultiRangeBuilder);

          class t_DoublePointMultiRangeBuilder {
          public:
            PyObject_HEAD
            DoublePointMultiRangeBuilder object;
            static PyObject *wrap_Object(const DoublePointMultiRangeBuilder&);
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
