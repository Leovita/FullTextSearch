#ifndef org_apache_lucene_search_grouping_BlockGroupingCollector_H
#define org_apache_lucene_search_grouping_BlockGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class Scorable;
        class ScoreMode;
        class Weight;
        namespace grouping {
          class TopGroups;
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class BlockGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_e0044ca881a4dd97,
              mid_collect_540b2b23d51b1efd,
              mid_finish_3720c61b0679eb3e,
              mid_getTopGroups_e8ba16ec9ddbd586,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_doSetNextReader_b7b06dce0a4097ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockGroupingCollector(const BlockGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            BlockGroupingCollector(const ::org::apache::lucene::search::Sort &, jint, jboolean, const ::org::apache::lucene::search::Weight &);

            void collect(jint) const;
            void finish() const;
            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(const ::org::apache::lucene::search::Sort &, jint, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockGroupingCollector);
          extern PyTypeObject *PY_TYPE(BlockGroupingCollector);

          class t_BlockGroupingCollector {
          public:
            PyObject_HEAD
            BlockGroupingCollector object;
            static PyObject *wrap_Object(const BlockGroupingCollector&);
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
