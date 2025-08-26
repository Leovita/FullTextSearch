#ifndef org_apache_lucene_search_grouping_GroupFacetCollector$GroupedFacetResult_H
#define org_apache_lucene_search_grouping_GroupFacetCollector$GroupedFacetResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace grouping {
          class GroupFacetCollector$FacetEntry;
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
        namespace grouping {

          class GroupFacetCollector$GroupedFacetResult : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5cb57eedc2d09d09,
              mid_addFacetCount_86aec93bf51df65e,
              mid_getFacetEntries_6d7644d6c0697519,
              mid_getTotalCount_bd89ce15dad49192,
              mid_getTotalMissingCount_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector$GroupedFacetResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector$GroupedFacetResult(const GroupFacetCollector$GroupedFacetResult& obj) : ::java::lang::Object(obj) {}

            GroupFacetCollector$GroupedFacetResult(jint, jint, jboolean, jint, jint);

            void addFacetCount(const ::org::apache::lucene::util::BytesRef &, jint) const;
            ::java::util::List getFacetEntries(jint, jint) const;
            jint getTotalCount() const;
            jint getTotalMissingCount() const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector$GroupedFacetResult);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector$GroupedFacetResult);

          class t_GroupFacetCollector$GroupedFacetResult {
          public:
            PyObject_HEAD
            GroupFacetCollector$GroupedFacetResult object;
            static PyObject *wrap_Object(const GroupFacetCollector$GroupedFacetResult&);
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
