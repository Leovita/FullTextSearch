#ifndef org_apache_lucene_search_grouping_AllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_AllGroupHeadsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class Scorable;
        class ScoreMode;
        namespace grouping {
          class GroupSelector;
          class AllGroupHeadsCollector;
        }
      }
      namespace util {
        class FixedBitSet;
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

          class AllGroupHeadsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_collect_540b2b23d51b1efd,
              mid_groupHeadsSize_20fbf7565993c3d7,
              mid_newCollector_79d3a1117c1a6da0,
              mid_retrieveGroupHeads_623cd4a044ba647a,
              mid_retrieveGroupHeads_dc8a29bacc2645ff,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_doSetNextReader_b7b06dce0a4097ed,
              mid_getCollectedGroupHeads_aa58b3beec16cbbd,
              mid_newGroupHead_7baddc4e0b66e8ca,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupHeadsCollector(const AllGroupHeadsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            void collect(jint) const;
            jint groupHeadsSize() const;
            static AllGroupHeadsCollector newCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &);
            JArray< jint > retrieveGroupHeads() const;
            ::org::apache::lucene::util::FixedBitSet retrieveGroupHeads(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(AllGroupHeadsCollector);
          extern PyTypeObject *PY_TYPE(AllGroupHeadsCollector);

          class t_AllGroupHeadsCollector {
          public:
            PyObject_HEAD
            AllGroupHeadsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupHeadsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupHeadsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupHeadsCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
