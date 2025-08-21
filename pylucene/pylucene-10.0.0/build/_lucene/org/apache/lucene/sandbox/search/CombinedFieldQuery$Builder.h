#ifndef org_apache_lucene_sandbox_search_CombinedFieldQuery$Builder_H
#define org_apache_lucene_sandbox_search_CombinedFieldQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class CombinedFieldQuery;
          class CombinedFieldQuery$Builder;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class CombinedFieldQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_addField_b83471f1255ff87b,
              mid_addField_df20e1b04e90d4cd,
              mid_addTerm_2febc27b02a74986,
              mid_build_1f70d100636f8c68,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombinedFieldQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombinedFieldQuery$Builder(const CombinedFieldQuery$Builder& obj) : ::java::lang::Object(obj) {}

            CombinedFieldQuery$Builder();

            CombinedFieldQuery$Builder addField(const ::java::lang::String &) const;
            CombinedFieldQuery$Builder addField(const ::java::lang::String &, jfloat) const;
            CombinedFieldQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::sandbox::search::CombinedFieldQuery build() const;
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
          extern PyType_Def PY_TYPE_DEF(CombinedFieldQuery$Builder);
          extern PyTypeObject *PY_TYPE(CombinedFieldQuery$Builder);

          class t_CombinedFieldQuery$Builder {
          public:
            PyObject_HEAD
            CombinedFieldQuery$Builder object;
            static PyObject *wrap_Object(const CombinedFieldQuery$Builder&);
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
