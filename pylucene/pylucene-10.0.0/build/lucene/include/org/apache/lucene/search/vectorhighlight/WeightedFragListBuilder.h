#ifndef org_apache_lucene_search_vectorhighlight_WeightedFragListBuilder_H
#define org_apache_lucene_search_vectorhighlight_WeightedFragListBuilder_H

#include "org/apache/lucene/search/vectorhighlight/BaseFragListBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList;
          class FieldFragList;
        }
      }
    }
  }
}
namespace java {
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

          class WeightedFragListBuilder : public ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_createFieldFragList_a32628d4e7bb72d2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedFragListBuilder(jobject obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedFragListBuilder(const WeightedFragListBuilder& obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragListBuilder(obj) {}

            WeightedFragListBuilder();
            WeightedFragListBuilder(jint);

            ::org::apache::lucene::search::vectorhighlight::FieldFragList createFieldFragList(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(WeightedFragListBuilder);
          extern PyTypeObject *PY_TYPE(WeightedFragListBuilder);

          class t_WeightedFragListBuilder {
          public:
            PyObject_HEAD
            WeightedFragListBuilder object;
            static PyObject *wrap_Object(const WeightedFragListBuilder&);
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
