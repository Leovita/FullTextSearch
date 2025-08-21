#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldTermStack;
          class FieldPhraseList;
          class FieldPhraseList$WeightedPhraseInfo;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldPhraseList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3dd40ba7aa8ab31e,
              mid_init$_00e52e08552d92c4,
              mid_init$_3b3a6a8a0f5fba27,
              mid_addIfNoOverlap_e383722ecadbbc3b,
              mid_getPhraseList_36830460e10839eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList(const FieldPhraseList& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList(const JArray< FieldPhraseList > &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, jint);

            void addIfNoOverlap(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList$WeightedPhraseInfo &) const;
            ::java::util::List getPhraseList() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList);
          extern PyTypeObject *PY_TYPE(FieldPhraseList);

          class t_FieldPhraseList {
          public:
            PyObject_HEAD
            FieldPhraseList object;
            static PyObject *wrap_Object(const FieldPhraseList&);
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
