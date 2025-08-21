#ifndef org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H
#define org_apache_lucene_search_vectorhighlight_SimpleBoundaryScanner_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class StringBuilder;
    class Character;
  }
  namespace util {
    class Set;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_5f1691ab0db33468,
              mid_init$_540b2b23d51b1efd,
              mid_init$_1fa292cafad34d61,
              mid_init$_bf985cb084ecbf74,
              mid_init$_0f58f229782f5805,
              mid_findEndOffset_2b824368d48f30fc,
              mid_findStartOffset_2b824368d48f30fc,
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
