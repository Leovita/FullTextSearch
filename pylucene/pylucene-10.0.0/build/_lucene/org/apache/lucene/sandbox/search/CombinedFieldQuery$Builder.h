#ifndef org_apache_lucene_sandbox_search_CombinedFieldQuery$Builder_H
#define org_apache_lucene_sandbox_search_CombinedFieldQuery$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class CombinedFieldQuery$Builder;
          class CombinedFieldQuery;
        }
      }
      namespace util {
        class BytesRef;
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

          class CombinedFieldQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_addField_d2cfcef02291c6d4,
              mid_addField_265c485e762e23c1,
              mid_addTerm_fc919d6cc03bd030,
              mid_build_2e126edf8f2bb6b0,
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
