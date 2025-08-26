#ifndef org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
    class StringBuilder;
    class Character;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
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
        namespace vectorhighlight {

          class SimpleBoundaryScanner : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_0d94a4c2ef17bd7e,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_2e9665167dfbf95f,
              mid_init$_2dfcfe857b709698,
              mid_init$_8f327b118d75eccc,
              mid_findEndOffset_e514c7a94058a30d,
              mid_findStartOffset_e514c7a94058a30d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleBoundaryScanner(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleBoundaryScanner(const SimpleBoundaryScanner& obj) : ::java::lang::Object(obj) {}

            static JArray< jchar > *DEFAULT_BOUNDARY_CHARS;
            static jint DEFAULT_MAX_SCAN;

            SimpleBoundaryScanner();
            SimpleBoundaryScanner(const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint);
            SimpleBoundaryScanner(jint, const JArray< jchar > &);
            SimpleBoundaryScanner(jint, const JArray< ::java::lang::Character > &);
            SimpleBoundaryScanner(jint, const ::java::util::Set &);

            jint findEndOffset(const ::java::lang::StringBuilder &, jint) const;
            jint findStartOffset(const ::java::lang::StringBuilder &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleBoundaryScanner);
          extern PyTypeObject *PY_TYPE(SimpleBoundaryScanner);

          class t_SimpleBoundaryScanner {
          public:
            PyObject_HEAD
            SimpleBoundaryScanner object;
            static PyObject *wrap_Object(const SimpleBoundaryScanner&);
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
