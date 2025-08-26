#ifndef org_apache_lucene_search_vectorhighlight_WeightedFieldFragList_H
#define org_apache_lucene_search_vectorhighlight_WeightedFieldFragList_H

#include "org/apache/lucene/search/vectorhighlight/FieldFragList.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo;
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

          class WeightedFieldFragList : public ::org::apache::lucene::search::vectorhighlight::FieldFragList {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_add_c144670d3f0e91dd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedFieldFragList(jobject obj) : ::org::apache::lucene::search::vectorhighlight::FieldFragList(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedFieldFragList(const WeightedFieldFragList& obj) : ::org::apache::lucene::search::vectorhighlight::FieldFragList(obj) {}

            WeightedFieldFragList(jint);

            void add(jint, jint, const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(WeightedFieldFragList);
          extern PyTypeObject *PY_TYPE(WeightedFieldFragList);

          class t_WeightedFieldFragList {
          public:
            PyObject_HEAD
            WeightedFieldFragList object;
            static PyObject *wrap_Object(const WeightedFieldFragList&);
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
