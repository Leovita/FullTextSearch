#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldPhraseList;
          class FieldTermStack;
          class FieldQuery;
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
              mid_init$_be15bd989b8ed117,
              mid_init$_3e7bcfe8dd77a154,
              mid_init$_e0443996b520bc05,
              mid_addIfNoOverlap_6eb630e1ac1a0c54,
              mid_getPhraseList_1387e1e2702ac173,
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
