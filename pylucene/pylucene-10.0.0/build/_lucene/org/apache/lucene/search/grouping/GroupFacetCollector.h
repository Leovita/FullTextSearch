#ifndef org_apache_lucene_search_grouping_GroupFacetCollector_H
#define org_apache_lucene_search_grouping_GroupFacetCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class ScoreMode;
        namespace grouping {
          class GroupFacetCollector$GroupedFacetResult;
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
      namespace search {
        namespace grouping {

          class GroupFacetCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_finish_3720c61b0679eb3e,
              mid_mergeSegmentResults_b185eb54f7bc18da,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_createSegmentResult_126c98737b968deb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector(const GroupFacetCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            void finish() const;
            ::org::apache::lucene::search::grouping::GroupFacetCollector$GroupedFacetResult mergeSegmentResults(jint, jint, jboolean) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector);

          class t_GroupFacetCollector {
          public:
            PyObject_HEAD
            GroupFacetCollector object;
            static PyObject *wrap_Object(const GroupFacetCollector&);
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
