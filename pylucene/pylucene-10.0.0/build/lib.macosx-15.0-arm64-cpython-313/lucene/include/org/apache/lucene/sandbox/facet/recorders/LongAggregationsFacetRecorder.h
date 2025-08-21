#ifndef org_apache_lucene_sandbox_facet_recorders_LongAggregationsFacetRecorder_H
#define org_apache_lucene_sandbox_facet_recorders_LongAggregationsFacetRecorder_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class Reducer;
            class LeafFacetRecorder;
            class FacetRecorder;
          }
          namespace iterators {
            class OrdinalIterator;
          }
          namespace cutters {
            class FacetCutter;
          }
        }
      }
      namespace search {
        class LongValuesSource;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {

            class LongAggregationsFacetRecorder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_091e1317bd1f5b26,
                mid_contains_ae22d3a856ad56f1,
                mid_getLeafRecorder_2a2d00636bd9a973,
                mid_getRecordedValue_1a8a71179739f982,
                mid_isEmpty_947277eca0748c4e,
                mid_recordedOrds_57cddf93ba106e9f,
                mid_reduce_b6f6e293249d2dde,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongAggregationsFacetRecorder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongAggregationsFacetRecorder(const LongAggregationsFacetRecorder& obj) : ::java::lang::Object(obj) {}

              LongAggregationsFacetRecorder(const JArray< ::org::apache::lucene::search::LongValuesSource > &, const JArray< ::org::apache::lucene::sandbox::facet::recorders::Reducer > &);

              jboolean contains(jint) const;
              ::org::apache::lucene::sandbox::facet::recorders::LeafFacetRecorder getLeafRecorder(const ::org::apache::lucene::index::LeafReaderContext &) const;
              jlong getRecordedValue(jint, jint) const;
              jboolean isEmpty() const;
              ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator recordedOrds() const;
              void reduce(const ::org::apache::lucene::sandbox::facet::cutters::FacetCutter &) const;
            };
          }
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
          namespace recorders {
            extern PyType_Def PY_TYPE_DEF(LongAggregationsFacetRecorder);
            extern PyTypeObject *PY_TYPE(LongAggregationsFacetRecorder);

            class t_LongAggregationsFacetRecorder {
            public:
              PyObject_HEAD
              LongAggregationsFacetRecorder object;
              static PyObject *wrap_Object(const LongAggregationsFacetRecorder&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
