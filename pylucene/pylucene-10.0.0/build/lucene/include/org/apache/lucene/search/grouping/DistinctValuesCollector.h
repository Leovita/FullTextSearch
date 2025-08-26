#ifndef org_apache_lucene_search_grouping_DistinctValuesCollector_H
#define org_apache_lucene_search_grouping_DistinctValuesCollector_H

#include "org/apache/lucene/search/grouping/SecondPassGroupingCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector;
          class DistinctValuesCollector$GroupCount;
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
    class Collection;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class DistinctValuesCollector : public ::org::apache::lucene::search::grouping::SecondPassGroupingCollector {
           public:
            enum {
              mid_init$_cfaed354fffa9cd3,
              mid_getGroups_1387e1e2702ac173,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistinctValuesCollector(jobject obj) : ::org::apache::lucene::search::grouping::SecondPassGroupingCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DistinctValuesCollector(const DistinctValuesCollector& obj) : ::org::apache::lucene::search::grouping::SecondPassGroupingCollector(obj) {}

            DistinctValuesCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::java::util::Collection &, const ::org::apache::lucene::search::grouping::GroupSelector &);

            ::java::util::List getGroups() const;
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
          extern PyType_Def PY_TYPE_DEF(DistinctValuesCollector);
          extern PyTypeObject *PY_TYPE(DistinctValuesCollector);

          class t_DistinctValuesCollector {
          public:
            PyObject_HEAD
            DistinctValuesCollector object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_DistinctValuesCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DistinctValuesCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DistinctValuesCollector&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
