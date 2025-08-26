#ifndef org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter$Builder_H
#define org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class StemmerOverrideFilter$StemmerOverrideMap;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class StemmerOverrideFilter$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_add_3ed05d2c3e8c70ff,
              mid_build_bc70393328910251,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StemmerOverrideFilter$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StemmerOverrideFilter$Builder(const StemmerOverrideFilter$Builder& obj) : ::java::lang::Object(obj) {}

            StemmerOverrideFilter$Builder();
            StemmerOverrideFilter$Builder(jboolean);

            jboolean add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
            ::org::apache::lucene::analysis::miscellaneous::StemmerOverrideFilter$StemmerOverrideMap build() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(StemmerOverrideFilter$Builder);
          extern PyTypeObject *PY_TYPE(StemmerOverrideFilter$Builder);

          class t_StemmerOverrideFilter$Builder {
          public:
            PyObject_HEAD
            StemmerOverrideFilter$Builder object;
            static PyObject *wrap_Object(const StemmerOverrideFilter$Builder&);
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
