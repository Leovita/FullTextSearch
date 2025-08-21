#ifndef org_apache_lucene_search_spell_JaroWinklerDistance_H
#define org_apache_lucene_search_spell_JaroWinklerDistance_H

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

          class JaroWinklerDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_equals_570b5248a6da3ef6,
              mid_getDistance_f7f6deee5db3b344,
              mid_getThreshold_9b6c3480dac00edf,
              mid_hashCode_20fbf7565993c3d7,
              mid_setThreshold_c771a95b0227fb6a,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JaroWinklerDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JaroWinklerDistance(const JaroWinklerDistance& obj) : ::java::lang::Object(obj) {}

            JaroWinklerDistance();

            jboolean equals(const ::java::lang::Object &) const;
            jfloat getDistance(const ::java::lang::String &, const ::java::lang::String &) const;
            jfloat getThreshold() const;
            jint hashCode() const;
            void setThreshold(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(JaroWinklerDistance);
          extern PyTypeObject *PY_TYPE(JaroWinklerDistance);

          class t_JaroWinklerDistance {
          public:
            PyObject_HEAD
            JaroWinklerDistance object;
            static PyObject *wrap_Object(const JaroWinklerDistance&);
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
