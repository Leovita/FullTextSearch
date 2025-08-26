#ifndef org_apache_lucene_facet_sortedset_ConcurrentSortedSetDocValuesFacetCounts_H
#define org_apache_lucene_facet_sortedset_ConcurrentSortedSetDocValuesFacetCounts_H

#include "org/apache/lucene/facet/sortedset/AbstractSortedSetDocValueFacetCounts.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class ConcurrentSortedSetDocValuesFacetCounts : public ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts {
           public:
            enum {
              mid_init$_67a649d789de0406,
              mid_init$_38f8c690440d4258,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcurrentSortedSetDocValuesFacetCounts(jobject obj) : ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcurrentSortedSetDocValuesFacetCounts(const ConcurrentSortedSetDocValuesFacetCounts& obj) : ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts(obj) {}

            ConcurrentSortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::java::util::concurrent::ExecutorService &);
            ConcurrentSortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &, const ::java::util::concurrent::ExecutorService &);
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(ConcurrentSortedSetDocValuesFacetCounts);
          extern PyTypeObject *PY_TYPE(ConcurrentSortedSetDocValuesFacetCounts);

          class t_ConcurrentSortedSetDocValuesFacetCounts {
          public:
            PyObject_HEAD
            ConcurrentSortedSetDocValuesFacetCounts object;
            static PyObject *wrap_Object(const ConcurrentSortedSetDocValuesFacetCounts&);
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
