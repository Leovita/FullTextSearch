#ifndef org_apache_lucene_analysis_charfilter_NormalizeCharMap$Builder_H
#define org_apache_lucene_analysis_charfilter_NormalizeCharMap$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {
          class NormalizeCharMap;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class NormalizeCharMap$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_add_3d104da0b5c75e64,
              mid_build_ef644b838a00b3e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizeCharMap$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizeCharMap$Builder(const NormalizeCharMap$Builder& obj) : ::java::lang::Object(obj) {}

            NormalizeCharMap$Builder();

            void add(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::charfilter::NormalizeCharMap build() const;
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
      namespace analysis {
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(NormalizeCharMap$Builder);
          extern PyTypeObject *PY_TYPE(NormalizeCharMap$Builder);

          class t_NormalizeCharMap$Builder {
          public:
            PyObject_HEAD
            NormalizeCharMap$Builder object;
            static PyObject *wrap_Object(const NormalizeCharMap$Builder&);
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
