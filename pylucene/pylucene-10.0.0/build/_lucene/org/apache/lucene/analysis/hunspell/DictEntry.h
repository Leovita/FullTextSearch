#ifndef org_apache_lucene_analysis_hunspell_DictEntry_H
#define org_apache_lucene_analysis_hunspell_DictEntry_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class DictEntry : public ::java::lang::Object {
           public:
            enum {
              mid_equals_00d17418847797d4,
              mid_getFlags_e7df854526d67fa3,
              mid_getMorphologicalData_e7df854526d67fa3,
              mid_getMorphologicalValues_49920ced44282529,
              mid_getStem_e7df854526d67fa3,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictEntry(const DictEntry& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getFlags() const;
            ::java::lang::String getMorphologicalData() const;
            ::java::util::List getMorphologicalValues(const ::java::lang::String &) const;
            ::java::lang::String getStem() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(DictEntry);
          extern PyTypeObject *PY_TYPE(DictEntry);

          class t_DictEntry {
          public:
            PyObject_HEAD
            DictEntry object;
            static PyObject *wrap_Object(const DictEntry&);
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
