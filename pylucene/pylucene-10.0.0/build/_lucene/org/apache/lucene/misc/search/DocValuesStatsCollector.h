#ifndef org_apache_lucene_misc_search_DocValuesStatsCollector_H
#define org_apache_lucene_misc_search_DocValuesStatsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class LeafCollector;
        class Collector;
      }
      namespace misc {
        namespace search {
          class DocValuesStats;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DocValuesStatsCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f14c14fc3047071c,
              mid_getLeafCollector_0a34433e6da38be9,
              mid_scoreMode_23e7061dcdc84768,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStatsCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStatsCollector(const DocValuesStatsCollector& obj) : ::java::lang::Object(obj) {}

            DocValuesStatsCollector(const ::org::apache::lucene::misc::search::DocValuesStats &);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(DocValuesStatsCollector);
          extern PyTypeObject *PY_TYPE(DocValuesStatsCollector);

          class t_DocValuesStatsCollector {
          public:
            PyObject_HEAD
            DocValuesStatsCollector object;
            static PyObject *wrap_Object(const DocValuesStatsCollector&);
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
