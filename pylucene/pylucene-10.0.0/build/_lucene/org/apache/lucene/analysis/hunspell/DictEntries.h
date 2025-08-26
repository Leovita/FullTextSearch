#ifndef org_apache_lucene_analysis_hunspell_DictEntries_H
#define org_apache_lucene_analysis_hunspell_DictEntries_H

#include "java/util/List.h"

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
        namespace hunspell {
          class DictEntry;
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
        namespace hunspell {

          class DictEntries : public ::java::util::List {
           public:
            enum {
              mid_getMorphologicalData_0da8f0b89b1e9a22,
              mid_getMorphologicalValues_5e00cb8aceec402a,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictEntries(jobject obj) : ::java::util::List(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictEntries(const DictEntries& obj) : ::java::util::List(obj) {}

            ::java::lang::String getMorphologicalData(jint) const;
            ::java::util::List getMorphologicalValues(jint, const ::java::lang::String &) const;
            jint size() const;
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
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(DictEntries);
          extern PyTypeObject *PY_TYPE(DictEntries);

          class t_DictEntries {
          public:
            PyObject_HEAD
            DictEntries object;
            static PyObject *wrap_Object(const DictEntries&);
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
