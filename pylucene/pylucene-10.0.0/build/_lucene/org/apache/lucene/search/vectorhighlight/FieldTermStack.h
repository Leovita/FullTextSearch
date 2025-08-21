#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldTermStack$TermInfo;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cfc1ee9259d0a549,
              mid_getFieldName_09a7afff1868fc5e,
              mid_isEmpty_947277eca0748c4e,
              mid_pop_d2f66dfc6a2e75b1,
              mid_push_0f6ebafe3493bc66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack(const FieldTermStack& obj) : ::java::lang::Object(obj) {}

            FieldTermStack(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            ::java::lang::String getFieldName() const;
            jboolean isEmpty() const;
            ::org::apache::lucene::search::vectorhighlight::FieldTermStack$TermInfo pop() const;
            void push(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack$TermInfo &) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldTermStack);
          extern PyTypeObject *PY_TYPE(FieldTermStack);

          class t_FieldTermStack {
          public:
            PyObject_HEAD
            FieldTermStack object;
            static PyObject *wrap_Object(const FieldTermStack&);
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
