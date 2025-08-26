#ifndef org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H
#define org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class LeafCollector;
        class TopDocs;
        class Collector;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class LargeNumHitsTopDocsCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_getLeafCollector_0a34433e6da38be9,
              mid_scoreMode_23e7061dcdc84768,
              mid_topDocs_ff559ee576f938cf,
              mid_topDocs_552a19c992db15ff,
              mid_newTopDocs_d9349ba7899a61ca,
              mid_populateResults_d8cc3a50beb36d32,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LargeNumHitsTopDocsCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LargeNumHitsTopDocsCollector(const LargeNumHitsTopDocsCollector& obj) : ::java::lang::Object(obj) {}

            LargeNumHitsTopDocsCollector(jint);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            ::org::apache::lucene::search::TopDocs topDocs() const;
            ::org::apache::lucene::search::TopDocs topDocs(jint) const;
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
        namespace search {
          extern PyType_Def PY_TYPE_DEF(LargeNumHitsTopDocsCollector);
          extern PyTypeObject *PY_TYPE(LargeNumHitsTopDocsCollector);

          class t_LargeNumHitsTopDocsCollector {
          public:
            PyObject_HEAD
            LargeNumHitsTopDocsCollector object;
            static PyObject *wrap_Object(const LargeNumHitsTopDocsCollector&);
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
