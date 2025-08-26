#ifndef org_apache_lucene_search_grouping_BlockGroupingCollector_H
#define org_apache_lucene_search_grouping_BlockGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Scorable;
        class Sort;
        namespace grouping {
          class TopGroups;
        }
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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
      namespace search {
        namespace grouping {

          class BlockGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_0da0f1e0e7072aaa,
              mid_collect_8226bd0b0fc13dba,
              mid_finish_e7bdbe105ce1bafb,
              mid_getTopGroups_bf921de31b018f0b,
              mid_scoreMode_23e7061dcdc84768,
              mid_setScorer_c06bdf7d53c6460a,
              mid_doSetNextReader_32243afefe6b151f,
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
