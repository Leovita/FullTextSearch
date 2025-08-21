#ifndef org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H
#define org_apache_lucene_sandbox_search_LargeNumHitsTopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
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
              mid_init$_540b2b23d51b1efd,
              mid_getLeafCollector_aca3f888603431e1,
              mid_scoreMode_45dfdcf7e901559d,
              mid_topDocs_a61875f39685c639,
              mid_topDocs_0289834b11e21a05,
              mid_newTopDocs_4916685cddae650c,
              mid_populateResults_de6fa2c5d78c15b6,
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
