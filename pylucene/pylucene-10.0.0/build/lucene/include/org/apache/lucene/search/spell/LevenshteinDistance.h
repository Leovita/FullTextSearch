#ifndef org_apache_lucene_search_spell_LevenshteinDistance_H
#define org_apache_lucene_search_spell_LevenshteinDistance_H

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
      namespace search {
        namespace spell {
          class StringDistance;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class LevenshteinDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_equals_570b5248a6da3ef6,
              mid_getDistance_f7f6deee5db3b344,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LevenshteinDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LevenshteinDistance(const LevenshteinDistance& obj) : ::java::lang::Object(obj) {}

            LevenshteinDistance();

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
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
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(LevenshteinDistance);
          extern PyTypeObject *PY_TYPE(LevenshteinDistance);

          class t_LevenshteinDistance {
          public:
            PyObject_HEAD
            LevenshteinDistance object;
            static PyObject *wrap_Object(const LevenshteinDistance&);
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
