#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldFragList$WeightedFragInfo;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldFragList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_add_c144670d3f0e91dd,
              mid_getFragInfos_1387e1e2702ac173,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList(const FieldFragList& obj) : ::java::lang::Object(obj) {}

            FieldFragList(jint);

            void add(jint, jint, const ::java::util::List &) const;
            ::java::util::List getFragInfos() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList);
          extern PyTypeObject *PY_TYPE(FieldFragList);

          class t_FieldFragList {
          public:
            PyObject_HEAD
            FieldFragList object;
            static PyObject *wrap_Object(const FieldFragList&);
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
