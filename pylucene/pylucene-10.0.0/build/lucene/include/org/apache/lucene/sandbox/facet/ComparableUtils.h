#ifndef org_apache_lucene_sandbox_facet_ComparableUtils_H
#define org_apache_lucene_sandbox_facet_ComparableUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByLongValueComparable;
          class ComparableUtils$ByCountComparable;
          namespace iterators {
            class ComparableSupplier;
          }
          namespace recorders {
            class LongAggregationsFacetRecorder;
            class CountFacetRecorder;
          }
          class ComparableUtils$ByOrdinalComparable;
          namespace cutters {
            class LongValueFacetCutter;
          }
          class ComparableUtils$ByAggregatedValueComparable;
          class ComparableUtils$ByCountAndLongValueComparable;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {

          class ComparableUtils : public ::java::lang::Object {
           public:
            enum {
              mid_byAggregatedValue_1aa7fc12fec66855,
              mid_byCount_162bca289818010b,
              mid_byCount_2e6570206415d8d0,
              mid_byLongValue_3a785fff78759797,
              mid_byOrdinal_d360204c52e1cf6c,
              mid_sort_8581fcdaf2d5853f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils(const ComparableUtils& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier byAggregatedValue(const ::org::apache::lucene::sandbox::facet::recorders::CountFacetRecorder &, const ::org::apache::lucene::sandbox::facet::recorders::LongAggregationsFacetRecorder &, jint);
            static ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier byCount(const ::org::apache::lucene::sandbox::facet::recorders::CountFacetRecorder &);
            static ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier byCount(const ::org::apache::lucene::sandbox::facet::recorders::CountFacetRecorder &, const ::org::apache::lucene::sandbox::facet::cutters::LongValueFacetCutter &);
            static ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier byLongValue(const ::org::apache::lucene::sandbox::facet::cutters::LongValueFacetCutter &);
            static ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier byOrdinal();
            static void sort(const JArray< jint > &, const ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier &);
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
      namespace sandbox {
        namespace facet {
          extern PyType_Def PY_TYPE_DEF(ComparableUtils);
          extern PyTypeObject *PY_TYPE(ComparableUtils);

          class t_ComparableUtils {
          public:
            PyObject_HEAD
            ComparableUtils object;
            static PyObject *wrap_Object(const ComparableUtils&);
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
